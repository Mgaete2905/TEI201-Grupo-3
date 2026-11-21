# Documentación de Software

## Descripción

Esta carpeta contiene la documentación técnica elaborada para facilitar la comprensión, configuración y reproducción del sistema IoT de monitoreo de turbidez, desarrollado para el proyecto TEI201 – Taller de Diseño en Ingeniería.

Los documentos permiten conocer la lógica general del programa y los procedimientos utilizados para configurar las plataformas de almacenamiento de datos y generación de notificaciones.

## Contenido de la carpeta

### Diagrama de flujo del software

Documento en formato PDF que representa gráficamente la secuencia de operaciones y decisiones del programa desarrollado para el ESP8266 NodeMCU.

Permite comprender la estructura lógica del software, desde la inicialización del sistema hasta el procesamiento de las mediciones, su transmisión y la gestión de alertas.

### Guía de configuración de ThingSpeak

Documento que explica paso a paso el procedimiento utilizado para configurar ThingSpeak como plataforma de almacenamiento y visualización de datos.

Incluye la creación del canal, configuración de los campos, obtención de las credenciales necesarias y verificación de la recepción de mediciones.

### Guía de configuración de Telegram

Documento que describe el procedimiento utilizado para implementar las notificaciones automáticas mediante Telegram.

Incluye la creación del bot, obtención de las credenciales de acceso, configuración de la comunicación con el ESP8266 y comprobación de la recepción de mensajes.

## Utilización de la documentación

Para comprender la estructura y funcionamiento general del programa, se recomienda consultar inicialmente el diagrama de flujo.

Las guías de ThingSpeak y Telegram pueden utilizarse de manera independiente, según la plataforma que se necesite configurar. Ambas contienen instrucciones detalladas que permiten reproducir los procedimientos realizados durante el desarrollo del prototipo.

## Consideraciones

Los documentos se elaboraron a partir de la configuración implementada durante el desarrollo del prototipo alfa.

Por seguridad, las guías no incluyen contraseñas ni claves privadas, por lo que cada usuario deberá generar e incorporar sus propias credenciales.

La documentación se conserva como material de consulta para facilitar la configuración del sistema y apoyar su mantenimiento o modificación en futuras iteraciones.
