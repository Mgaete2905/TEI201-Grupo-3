/*
  Prototipo IoT de turbidez del agua - TEI201, Avance #3
  Placa: ESP8266 (NodeMCU)  |  Sensor: kit de turbidez G-008 (salida analógica)
  Nube: ThingSpeak (almacenamiento + dashboard)

  Nota: los NTU son estimaciones basadas en bibliografia, no medidas
  validadas con turbidimetro. El umbral NTU es experimental, no normativo.

  Ciclo de datos:
    1) Captura: lee el voltaje del sensor (promedio de varias muestras)
    2) Información: calcula V/V0, NTU estimados y alerta por umbral de NTU
    3) Almacenamiento: envía los datos a ThingSpeak cada 20 s
    4) Visualización: gráficos del canal en ThingSpeak

  Campos del canal en ThingSpeak:
    Field 1: Voltaje del sensor (V)
    Field 2: Razón V/V0 (adimensional)
    Field 3: NTU estimados (ajuste preliminar con referencias bibliograficas)
    Field 4: Alerta (0 = normal, 1 = NTU estimados sobre el umbral experimental)
*/

#include <ESP8266WiFi.h>   // WiFi del ESP8266 (incluida en el paquete de la placa)
#include <ThingSpeak.h>    // Biblioteca ThingSpeak de MathWorks
#include <WiFiClientSecureBearSSL.h> // Conexion HTTPS para Telegram
#include <ESP8266HTTPClient.h>       // Solicitudes HTTP a Telegram
#include "secrets.h"       // WiFi y claves de ThingSpeak (NO subir a GitHub)

// ---------- Hardware ----------
const int   PIN_TURBIDEZ   = A0;     // único pin analógico del ESP8266
const float FACTOR_DIVISOR = 1.4545; // (10k + 22k) / 22k: deshace el divisor de voltaje
const int   N_MUESTRAS     = 20;     // muestras que se promedian por lectura

// ---------- Calibración (ajustar con mediciones reales) ----------
float V0 = 3.2946;                // voltaje en agua limpia (medirlo y reemplazarlo)
const float UMBRAL_NTU = 133.4; // umbral experimental equivalente aproximadamente a V/V0 < 0.90

// ---------- Estimacion preliminar de NTU ----------
// Ajuste lineal de voltajes medidos vs. NTU bibliograficos (NO calibracion validada).
const float PENDIENTE_NTU = -262.3654;
const float INTERCEPTO_NTU = 911.3936;
const float V_MIN_ENSAYADO = 2.60131;
const float V_MAX_ENSAYADO = 3.25885;

// ---------- Envío ----------
const unsigned long INTERVALO_MS = 20000; // ThingSpeak gratis exige >= 15 s entre envíos
unsigned long ultimoEnvio = 0;
bool primerEnvio = true;
bool alertaNotificada = false; // evita repetir alertas mientras persista la condicion

WiFiClient client;

// Envia un aviso a Telegram. Requiere TELEGRAM_BOT_TOKEN y TELEGRAM_CHAT_ID
// definidos en secrets.h. Para el prototipo se omite la verificacion TLS;
// en una instalacion definitiva, validar el certificado del servidor.
bool enviarAlertaTelegram() {
  BearSSL::WiFiClientSecure clienteSeguro;
  clienteSeguro.setInsecure(); // Solo prototipo: HTTPS sin validar identidad del servidor
  HTTPClient http;
  String url = String("https://api.telegram.org/bot") + TELEGRAM_BOT_TOKEN + "/sendMessage";
  if (!http.begin(clienteSeguro, url)) {
    Serial.println("No se pudo iniciar la conexion a Telegram");
    return false;
  }

  http.addHeader("Content-Type", "application/x-www-form-urlencoded");
  String cuerpo = String("chat_id=") + TELEGRAM_CHAT_ID +
                  "&text=ALERTA%20DE%20TURBIDEZ%3A%20revisa%20ThingSpeak";
  int codigo = http.POST(cuerpo);
  http.end();
  if (codigo == 200) {
    Serial.println("Alerta enviada a Telegram");
    return true;
  }
  Serial.print("Error Telegram, codigo: ");
  Serial.println(codigo);
  return false;
}

// Conecta a WiFi con un tiempo máximo de espera. Devuelve true si logró conectar.
bool conectarWiFi() {
  if (WiFi.status() == WL_CONNECTED) return true;

  WiFi.mode(WIFI_STA);
  WiFi.begin(WIFI_SSID, WIFI_PASS);
  Serial.print("Conectando a WiFi");

  unsigned long inicio = millis();
  while (WiFi.status() != WL_CONNECTED && millis() - inicio < 15000) {
    delay(500);
    Serial.print(".");
  }

  if (WiFi.status() == WL_CONNECTED) {
    Serial.println("\nWiFi conectado");
    return true;
  }
  Serial.println("\nNo se pudo conectar a WiFi");
  return false;
}

// Lee el voltaje real a la salida del sensor (promedio de N_MUESTRAS lecturas).
float leerVoltaje() {
  long suma = 0;
  for (int i = 0; i < N_MUESTRAS; i++) {
    suma += analogRead(PIN_TURBIDEZ);
    delay(5);
  }
  float vPin = (suma / (float)N_MUESTRAS) * 3.3 / 1023.0; // voltaje en A0 (ADC de 10 bits)
  return vPin * FACTOR_DIVISOR;                           // voltaje real del sensor
}

void setup() {
  Serial.begin(115200);
  conectarWiFi();
  ThingSpeak.begin(client);
}

void loop() {
  if (primerEnvio || millis() - ultimoEnvio >= INTERVALO_MS) {
    primerEnvio = false;
    ultimoEnvio = millis();

    // 1) Captura
    float voltaje = leerVoltaje();

    // 2) Información derivada
    float razon  = voltaje / V0;                  // 1.0 = agua limpia; baja al aumentar la turbidez
    float ntuEstimado = PENDIENTE_NTU * voltaje + INTERCEPTO_NTU;
    // Evita mostrar turbidez negativa; no valida extrapolaciones.
    if (ntuEstimado < 0.0f) ntuEstimado = 0.0f;
    bool fueraDeRango = (voltaje < V_MIN_ENSAYADO || voltaje > V_MAX_ENSAYADO);
    int   alerta = (ntuEstimado > UMBRAL_NTU) ? 1 : 0; // alerta basada en NTU estimados

    Serial.print("Voltaje: ");  Serial.print(voltaje, 2);
    Serial.print(" V | V/V0: "); Serial.print(razon, 3);
    Serial.print(" | NTU estimados: "); Serial.print(ntuEstimado, 2);
    Serial.print(" | Alerta: "); Serial.println(alerta);
    if (fueraDeRango) {
      Serial.println("ADVERTENCIA: voltaje fuera del rango experimental; NTU extrapolados.");
    }

    // 3) Almacenamiento en ThingSpeak (un solo mensaje con varios campos)
    if (conectarWiFi()) {
      ThingSpeak.setField(1, voltaje);
      ThingSpeak.setField(2, razon);
      ThingSpeak.setField(3, ntuEstimado);
      ThingSpeak.setField(4, alerta);
      int codigo = ThingSpeak.writeFields(TS_CHANNEL_ID, TS_WRITE_KEY);

      if (codigo == 200) {
        Serial.println("Dato enviado correctamente");
      } else {
        Serial.print("Error ThingSpeak, codigo: ");
        Serial.println(codigo);
      }

      // 4) Notificacion por Telegram solo al comenzar una alerta.
      if (alerta == 0) {
        alertaNotificada = false; // habilita un nuevo aviso para la proxima alerta
      } else if (!alertaNotificada) {
        alertaNotificada = enviarAlertaTelegram();
      }
    }
  }
}
