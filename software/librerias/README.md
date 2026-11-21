# Librerías del Software

## Descripción

Esta carpeta documenta las bibliotecas y dependencias utilizadas en el desarrollo del software del prototipo IoT de monitoreo de turbidez, correspondiente al proyecto TEI201 – Taller de Diseño en Ingeniería.

El programa fue desarrollado en Arduino IDE para la placa ESP8266 NodeMCU e integra bibliotecas que permiten establecer la conexión Wi-Fi, transmitir mediciones a ThingSpeak y enviar notificaciones mediante Telegram.

## Librerías incluidas en el paquete ESP8266

Las siguientes bibliotecas forman parte del paquete de placas **ESP8266 by ESP8266 Community**, por lo que no requieren una instalación individual.

### 1. ESP8266WiFi.h

- **Propósito:** Permite conectar el ESP8266 a una red Wi-Fi y mantener la comunicación necesaria para transmitir datos.
- **Fuente:** Paquete ESP8266 by ESP8266 Community.
- **Instalación:** Arduino IDE → Herramientas → Placa → Gestor de placas. Buscar `esp8266` e instalar el paquete correspondiente.

### 2. WiFiClientSecureBearSSL.h

- **Propósito:** Permite establecer conexiones HTTPS mediante BearSSL, utilizadas para comunicarse con la API de Telegram.
- **Fuente:** Paquete ESP8266 by ESP8266 Community.
- **Instalación:** Incluida con el paquete ESP8266.

### 3. ESP8266HTTPClient.h

- **Propósito:** Permite realizar solicitudes HTTP y HTTPS. En nuestro programa se utiliza para enviar las notificaciones al bot de Telegram.
- **Fuente:** Paquete ESP8266 by ESP8266 Community.
- **Instalación:** Incluida con el paquete ESP8266.

## Librería adicional

### 4. ThingSpeak.h

- **Propósito:** Permite enviar las mediciones procesadas desde el ESP8266 al canal de ThingSpeak, donde se almacenan y visualizan los datos.
- **Desarrollador:** MathWorks.
- **Fuente:** Arduino Library Manager.
- **Instalación:**
  1. Abrir Arduino IDE.
  2. Seleccionar Programa → Incluir Librería → Administrar bibliotecas.
  3. Buscar `ThingSpeak`.
  4. Seleccionar la biblioteca desarrollada por MathWorks.
  5. Instalarla y comprobar que esté disponible para su inclusión en el programa.

## Archivos de configuración

### adicional_codigo.h

Además de las bibliotecas anteriores, el código incorpora el archivo local `adicional_codigo.h`, utilizado para almacenar las credenciales necesarias para establecer las conexiones.

Este archivo contiene la información de acceso a la red Wi-Fi, las credenciales de escritura de ThingSpeak y los identificadores necesarios para utilizar el bot de Telegram.

**No corresponde a una biblioteca externa**, sino a un archivo de configuración del proyecto. Por seguridad, no debe publicarse con credenciales reales en GitHub.

Para reproducir el sistema, es necesario crear este archivo localmente e incorporar las credenciales correspondientes.

## Librerías personalizadas o modificadas

En la versión documentada del prototipo no desarrollamos ni modificamos bibliotecas externas. El software utiliza las bibliotecas indicadas anteriormente y funciones implementadas directamente en el código fuente.

Por lo tanto, esta carpeta no requiere archivos adicionales `.cpp` o `.h` correspondientes a bibliotecas personalizadas.

## Resumen de dependencias

| Biblioteca o componente | Versión | Fuente | Obligatoria |
|---|---|---|---|
| ESP8266WiFi | Incluida en el core ESP8266 | ESP8266 Community | Sí |
| WiFiClientSecureBearSSL | Incluida en el core ESP8266 | ESP8266 Community | Sí |
| ESP8266HTTPClient | Incluida en el core ESP8266 | ESP8266 Community | Sí |
| ThingSpeak | Según versión instalada | MathWorks / Arduino Library Manager | Sí |
| secrets.h | Archivo local del proyecto | Configuración propia | Sí |

**Nota:** Las versiones exactas del paquete ESP8266 y de la biblioteca ThingSpeak deben registrarse a partir de las versiones instaladas en Arduino IDE, ya que no se encuentran especificadas en el código fuente.

## Verificación de las dependencias

Una vez instaladas las bibliotecas y configurado el archivo `adicional_codigo.h`, se recomienda abrir el programa principal en Arduino IDE y ejecutar la opción **Verificar/Compilar**.

Si la compilación finaliza correctamente y no aparecen errores relacionados con archivos de cabecera faltantes, las dependencias necesarias se encuentran disponibles.

Esta documentación permite identificar los componentes de software requeridos y facilita la preparación del entorno para reproducir el prototipo.
