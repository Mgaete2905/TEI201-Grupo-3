# Código Fuente

## Descripción

Esta carpeta contiene el código fuente desarrollado para el prototipo IoT de monitoreo de turbidez del agua, correspondiente al proyecto TEI201 – Taller de Diseño en Ingeniería.

El software fue programado en Arduino IDE para el ESP8266 NodeMCU y permite adquirir las mediciones del sensor G-008, procesar los datos obtenidos, transmitirlos a ThingSpeak y generar notificaciones mediante Telegram cuando se supera el umbral experimental establecido.

## Archivos principales

### `TEI201(2).ino`

Archivo principal del proyecto, que contiene la programación necesaria para controlar el proceso de medición, procesamiento y transmisión de datos.

**Estructura:**

- **Declaración de bibliotecas y constantes:** incorpora las dependencias utilizadas y define los parámetros de medición, estimación de turbidez y comunicación.
- **`setup()`:** inicializa la comunicación serie, establece la conexión Wi-Fi e inicia la comunicación con ThingSpeak.
- **`loop()`:** ejecuta periódicamente la adquisición de mediciones, el cálculo de las variables, su transmisión y la evaluación de alertas.

**Funciones principales:**

| Función | Descripción |
|---|---|
| `conectarWiFi()` | Establece la conexión con la red Wi-Fi y comprueba su disponibilidad. |
| `leerVoltaje()` | Obtiene el promedio de 20 lecturas analógicas y calcula el voltaje del sensor. |
| `enviarAlertaTelegram()` | Envía una notificación al bot de Telegram mediante una solicitud HTTPS. |
| `setup()` | Realiza la inicialización del sistema. |
| `loop()` | Coordina el ciclo principal de medición y comunicación. |

### `adicional_codigo.h`

Archivo complementario destinado a almacenar las credenciales necesarias para la conexión con los servicios utilizados por el prototipo.

Su finalidad es mantener estos datos separados del código principal y facilitar su actualización sin modificar las funciones del programa.

**Información de configuración:**

- Nombre y contraseña de la red Wi-Fi.
- Identificador del canal y clave de escritura de ThingSpeak.
- Token del bot e identificador del chat de Telegram.

Por seguridad, las credenciales reales no deben publicarse en el repositorio. Se recomienda conservar una versión de ejemplo con valores ficticios y mantener el archivo que contiene los datos reales únicamente en el entorno local.

## Estándares de código

### Organización y comentarios

El programa se encuentra organizado en bloques que permiten identificar las etapas de adquisición, procesamiento, almacenamiento y generación de alertas.

Los comentarios se utilizan para describir la finalidad de las funciones, explicar los parámetros relevantes y señalar consideraciones relacionadas con el funcionamiento del prototipo.

### Nombres de variables y funciones

Se utilizan convenciones de nomenclatura para facilitar la lectura del programa:

- **Funciones:** `camelCase`, como `conectarWiFi()` y `leerVoltaje()`.
- **Variables:** nombres descriptivos, como `voltaje`, `ntuEstimado` y `alertaNotificada`.
- **Constantes:** `UPPER_SNAKE_CASE`, como `UMBRAL_NTU`, `N_MUESTRAS` e `INTERVALO_MS`.

Estas convenciones permiten diferenciar los parámetros fijos, las variables de ejecución y las funciones del sistema.

## Parámetros principales

El programa incorpora los siguientes parámetros, definidos a partir de la configuración del prototipo y las pruebas realizadas:

| Parámetro | Valor | Descripción |
|---|---|---|
| `PIN_TURBIDEZ` | `A0` | Entrada analógica utilizada para leer el sensor. |
| `N_MUESTRAS` | `20` | Cantidad de lecturas utilizadas para calcular el promedio. |
| `FACTOR_DIVISOR` | `1.4545` | Factor de corrección del divisor de voltaje. |
| `V0` | `3.2946 V` | Voltaje de referencia obtenido con agua limpia. |
| `UMBRAL_NTU` | `133.4` | Umbral experimental utilizado para activar la alerta. |
| `INTERVALO_MS` | `20000` | Intervalo entre ciclos de medición y envío, equivalente a 20 segundos. |

La estimación de turbidez se realiza mediante una ecuación lineal incorporada al código, obtenida a partir del ajuste utilizado durante el desarrollo del prototipo. Sus resultados corresponden a estimaciones preliminares y no a una calibración validada con un turbidímetro.

## Testing y debugging

### Monitor serie

El programa utiliza el monitor serie de Arduino IDE para visualizar las mediciones y comprobar el estado de las comunicaciones.

**Velocidad de comunicación:** `115200 baudios`.

Durante la ejecución se muestran los siguientes datos:

- Voltaje del sensor (V).
- Razón de voltaje V/V₀.
- Turbidez estimada (NTU).
- Estado de alerta (0 o 1).

También se presentan mensajes relacionados con la conexión Wi-Fi, el envío de datos a ThingSpeak y las notificaciones de Telegram.

### Verificación del funcionamiento

Para comprobar el funcionamiento del software se utiliza el monitor serie junto con los registros de ThingSpeak y la recepción de mensajes en Telegram.

La verificación permite identificar posibles problemas de conexión, comprobar la actualización periódica de los datos y observar el comportamiento del sistema de alertas.

El código incorpora mensajes de advertencia cuando el voltaje registrado se encuentra fuera del rango experimental utilizado para estimar la turbidez.

### Gestión de alertas

El programa evalúa la turbidez estimada respecto del umbral de 133,4 NTU.

Cuando se supera este valor, el estado de alerta cambia a `1` y se intenta enviar una notificación a Telegram. Para evitar mensajes repetidos durante una misma condición de alerta, se utiliza la variable `alertaNotificada`.

El sistema habilita una nueva notificación cuando la medición vuelve a una condición normal.

## Documentación complementaria

Las bibliotecas necesarias para compilar el programa se encuentran identificadas en `software/librerias/`.

Por otra parte, la carpeta `software/docs/` contiene el diagrama de flujo del programa y las guías de configuración de ThingSpeak y Telegram.

Estos documentos complementan el código fuente y permiten comprender su estructura y reproducir la configuración de los servicios utilizados.
