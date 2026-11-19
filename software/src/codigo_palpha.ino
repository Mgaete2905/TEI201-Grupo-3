#define TdsSensorPin A1      
#define LedPin 13            
#define BuzzerPin 8          

float temperature = 25.0;  // Temperatura estimada del agua dulce
float tdsValue = 0.0;
float analogVoltage = 0.0;
float calibrationFactor = 1.0;  
float tdsThreshold = 1000.0;     // Umbral de seguridad ajustado para agua dulce (ppm)

// --- Función para calcular TDS con compensación de temperatura ---
float calcularTDS(float voltage, float temp) {
  float coef = 1.0 + 0.02 * (temp - 25.0);
  float vComp = voltage / coef;
  return (133.42 * pow(vComp, 3)
        - 255.86 * pow(vComp, 2)
        + 857.39 * vComp) * calibrationFactor;
}

void setup() {
  Serial.begin(9600); // Velocidad estándar y estable para el Monitor Serial
  pinMode(LedPin, OUTPUT);
  pinMode(BuzzerPin, OUTPUT);
  digitalWrite(LedPin, LOW);
  noTone(BuzzerPin);

  Serial.println("Sistema TDS de Agua Dulce Iniciado.");
  Serial.println("Comandos disponibles:");
  Serial.println(" - 'calibrar=VALOR' -> calibrar con solución estándar (ppm)");
  Serial.println(" - 'umbral=VALOR'   -> definir límite de alerta en ppm");
  Serial.println("Formato salida: millis(ms),TDS(ppm)");
}

void loop() {
  // --- Lectura de comandos por Monitor Serial para la demo ---
  if (Serial.available()) {
    String comando = Serial.readStringUntil('\n');
    comando.trim();

    if (comando.startsWith("calibrar=")) {
      float tdsStd = comando.substring(9).toFloat();
      if (tdsStd > 0) {
        int s = analogRead(TdsSensorPin);
        float v = s * (5.0 / 1024.0);
        float coef = 1.0 + 0.02 * (temperature - 25.0);
        float vComp = v / coef;
        float tdsSinFactor = (133.42 * pow(vComp, 3)
                            - 255.86 * pow(vComp, 2)
                            + 857.39 * vComp);
        if (tdsSinFactor > 0) {
          calibrationFactor = tdsStd / tdsSinFactor;
          Serial.print("Nuevo factor de calibración: ");
          Serial.println(calibrationFactor, 4);
        } else {
          Serial.println("Error: lectura inválida para calibración.");
        }
      }
    } else if (comando.startsWith("umbral=")) {
      float nuevoUmbral = comando.substring(7).toFloat();
      if (nuevoUmbral >= 0) {
        tdsThreshold = nuevoUmbral;
        Serial.print("Nuevo umbral actualizado: ");
        Serial.print(tdsThreshold, 0);
        Serial.println(" ppm");
      }
    }
  }

  // --- Lectura analógica del sensor ---
  int sensorValue = analogRead(TdsSensorPin);
  analogVoltage = sensorValue * (5.0 / 1024.0);
  tdsValue = calcularTDS(analogVoltage, temperature);

  // Evitar valores negativos por ruido eléctrico
  if (tdsValue < 0) {
    tdsValue = 0;
  }

  // --- Salida en formato CSV para la documentación y registro ---
  Serial.println(tdsValue, 0);

  // --- Lógica de Actuadores (LED y Zumbador de Alerta) ---
  if (tdsValue > tdsThreshold) {
    digitalWrite(LedPin, HIGH);
    tone(BuzzerPin, 1000); // Emite tono de 1 kHz en el zumbador
  } else {
    digitalWrite(LedPin, LOW);
    noTone(BuzzerPin);
  }

  delay(1000); // Pausa de 1 segundo entre mediciones estables
}
