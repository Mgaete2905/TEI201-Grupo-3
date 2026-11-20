# Software – Sistema IoT de Monitoreo de Turbidez

## Descripción

Esta carpeta contiene el código fuente y la documentación técnica del software desarrollado para el prototipo IoT de monitoreo de turbidez del agua, correspondiente al proyecto TEI201 – Taller de Diseño en Ingeniería.

El software fue desarrollado para una placa **ESP8266 NodeMCU**, utilizando Arduino IDE y programación en C/C++. Su función principal es gestionar la adquisición de datos del sensor de turbidez G-008, procesar las mediciones, transmitir la información a ThingSpeak y generar alertas automáticas mediante Telegram cuando se detectan condiciones que superan el umbral establecido.

De esta manera, el software integra las funciones de captura, procesamiento, almacenamiento remoto, visualización y notificación, permitiendo realizar un seguimiento de las condiciones del agua.

## Organización de la carpeta

### `src/`

Contiene el código fuente del prototipo, desarrollado en Arduino IDE mediante archivos `.ino`.

Incluye las instrucciones necesarias para inicializar el sistema, leer el sensor, procesar las mediciones, establecer la conexión Wi-Fi, transmitir los datos a ThingSpeak y gestionar las alertas mediante Telegram.

### `librerias/`

Contiene información sobre las librerías utilizadas para el funcionamiento del software y, cuando corresponda, archivos adicionales necesarios para su implementación.

### `docs/`

Contiene la documentación técnica del software, incluyendo explicaciones sobre su funcionamiento, configuración, arquitectura y procedimientos de instalación.

## Tecnologías utilizadas

| Tecnología | Función |
|---|---|
| ESP8266 NodeMCU | Procesamiento de datos y conectividad Wi-Fi |
| Arduino IDE | Desarrollo, compilación y carga del programa |
| C/C++ | Lenguaje de programación |
| ESP8266WiFi | Gestión de la conexión Wi-Fi |
| ThingSpeak | Almacenamiento y visualización remota de mediciones |
| Telegram | Envío de notificaciones automáticas al usuario |

## Funcionamiento general del software

El programa ejecuta un ciclo de adquisición, procesamiento y transmisión de datos que permite monitorear la respuesta del sensor de turbidez.

### 1. Inicialización del sistema

Al encender el prototipo, el ESP8266 configura los parámetros necesarios para su funcionamiento, inicializa las variables y establece la conexión con la red Wi-Fi.

### 2. Captura de datos

El sensor G-008 entrega una señal analógica relacionada con la turbidez del agua, la cual es leída y procesada por el ESP8266.

Para disminuir las fluctuaciones de las lecturas, el programa considera un promedio de mediciones antes de procesar los resultados.

### 3. Procesamiento de las mediciones

A partir de la señal registrada, el sistema calcula el voltaje del sensor y su relación respecto de un voltaje de referencia (V₀).

Además, incorpora una ecuación de conversión obtenida durante la caracterización experimental, que permite estimar la turbidez en unidades nefelométricas de turbidez (NTU):

**NTU estimados = −262,3654 × V + 911,3936**

Esta expresión permite transformar las mediciones de voltaje en valores estimados de turbidez, facilitando su interpretación.

### 4. Transmisión y almacenamiento

Los datos procesados se transmiten mediante conexión Wi-Fi a ThingSpeak, con intervalos aproximados de 20 segundos.

La plataforma permite almacenar los registros y visualizar su evolución mediante gráficos.

Los campos utilizados son:

| Campo | Variable registrada |
|---|---|
| Field 1 | Voltaje del sensor (V) |
| Field 2 | Razón V/V₀ |
| Field 3 | Turbidez estimada (NTU) |
| Field 4 | Estado de alerta (0 o 1) |

### 5. Sistema de alertas mediante Telegram

El prototipo incorpora un sistema de notificaciones automáticas mediante Telegram, cuyo objetivo es informar al usuario cuando las mediciones del sensor superan un umbral establecido.

Para implementar esta funcionalidad, se creó un bot de Telegram mediante **BotFather**, obteniendo un token de autenticación que permite establecer la comunicación con el servicio.

Posteriormente, se identificó el chat de destino y se incorporaron los parámetros de conexión necesarios en el código del ESP8266.

Durante el funcionamiento del prototipo, el software evalúa las mediciones registradas y determina si se cumple la condición de alerta programada.

Cuando se detecta una condición que supera el umbral establecido:

1. El sistema identifica la condición de alerta a partir de los datos procesados.
2. Se actualiza el estado de alerta correspondiente en ThingSpeak, utilizando el Field 4.
3. El ESP8266 genera una solicitud de comunicación con el servicio de Telegram mediante la conexión Wi-Fi.
4. El bot envía una notificación al chat configurado, informando sobre la condición detectada.

De esta manera, el usuario puede recibir avisos directamente en su teléfono, sin necesidad de consultar permanentemente los gráficos de ThingSpeak.

La integración de Telegram permitió complementar el almacenamiento y la visualización de datos con una herramienta de notificación remota, mejorando la capacidad del prototipo para informar oportunamente sobre posibles alteraciones en las condiciones del agua.

## Instalación y configuración general

Para ejecutar el software se requiere:

1. Instalar Arduino IDE.
2. Incorporar el paquete de placas **ESP8266 by ESP8266 Community**.
3. Instalar las librerías necesarias para la conectividad y transmisión de datos.
4. Abrir el código fuente disponible en `src/`.
5. Configurar las credenciales de Wi-Fi y los parámetros de conexión a ThingSpeak.
6. Configurar el token del bot y el identificador del chat de Telegram.
7. Seleccionar la placa ESP8266 NodeMCU y el puerto correspondiente.
8. Compilar y cargar el programa.
9. Verificar la conexión, la recepción de datos en ThingSpeak y el funcionamiento de las alertas mediante Telegram.

Las instrucciones específicas de configuración y funcionamiento se encuentran documentadas en las subcarpetas correspondientes.

**Importante:** las contraseñas, claves API y tokens de acceso deben mantenerse privados y no publicarse directamente en el repositorio.

## Documentación y desarrollo

El software forma parte de la evolución del prototipo hacia un sistema de monitoreo remoto mediante tecnologías IoT.

Su implementación permitió integrar la adquisición de datos del sensor con herramientas de almacenamiento, visualización y notificación, facilitando el seguimiento de las mediciones y su posterior análisis experimental.

Los registros obtenidos durante las pruebas se encuentran organizados en la carpeta `testing/`, mientras que los antecedentes técnicos y los resultados del desarrollo se presentan en la documentación general del proyecto.
