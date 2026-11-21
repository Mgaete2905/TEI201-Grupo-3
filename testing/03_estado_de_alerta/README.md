# 03 – Evaluación experimental del sistema de alertas

## Descripción

Esta carpeta reúne los datos y registros gráficos correspondientes a la tercera etapa de pruebas experimentales del prototipo IoT de monitoreo de turbidez, desarrollado para el proyecto TEI201 – Taller de Diseño en Ingeniería.

El propósito de esta etapa fue verificar el funcionamiento del sistema de alertas, evaluando su capacidad para detectar variaciones de turbidez, activar una alerta al superar el umbral establecido de **133,4 NTU** y enviar notificaciones automáticas mediante Telegram.

## Metodología general

Se realizaron cinco ciclos experimentales utilizando agua limpia y soluciones de caolín de **185 y 345 mg/L**. En cada ciclo se efectuaron mediciones de aproximadamente dos minutos por muestra, siguiendo el orden de agua limpia, 185 mg/L y 345 mg/L.

Durante las pruebas, el sensor G-008 registró las variaciones de turbidez, mientras que el ESP8266 NodeMCU transmitió automáticamente los datos a ThingSpeak mediante conexión Wi-Fi, con intervalos de aproximadamente 20 segundos.

Se analizaron los valores de NTU estimados y el estado de alerta (0/1), verificando su comportamiento respecto del umbral programado. Además, se comprobó la recepción de notificaciones mediante Telegram y se observaron tiempos de respuesta de aproximadamente **10 a 13 segundos** desde la activación registrada.

Los datos fueron exportados en formato CSV y se conservaron los gráficos correspondientes a cada ciclo experimental.

## Organización de la carpeta

### `datos_csv/`

Contiene los cinco archivos CSV exportados desde ThingSpeak, correspondientes a los ciclos experimentales realizados.

Estos registros se utilizaron para calcular los promedios de turbidez estimada, verificar la activación de las alertas y analizar el comportamiento del sistema.

La subcarpeta incluye un README con una descripción de los registros y su utilización.

### `graficos/`

Contiene los gráficos de NTU estimados y estado de alerta (0/1), obtenidos durante los cinco ciclos experimentales.

Estas imágenes permiten visualizar las variaciones de turbidez, identificar cuándo se supera el umbral establecido y comprobar la activación o desactivación de las alertas.

La subcarpeta incluye un README que describe el contenido y la finalidad de los gráficos.

## Resultados de la evaluación

A partir de los registros experimentales, se calcularon los siguientes promedios aproximados de turbidez estimada:

| Muestra | NTU promedio estimados |
|---|---:|
| Agua limpia | 75,4 |
| Caolín 185 mg/L | 147,8 |
| Caolín 345 mg/L | 203,3 |

Los promedios son aproximados debido a que los cambios manuales entre muestras no quedaron identificados con exactitud en los registros.

Las pruebas permitieron comprobar que el sistema activaba las alertas cuando los valores estimados superaban los **133,4 NTU**. Asimismo, se verificó la recepción de notificaciones mediante Telegram, con tiempos observados de aproximadamente **10 a 13 segundos** desde la activación registrada.

Sin embargo, se identificaron fluctuaciones alrededor del umbral, que provocaron cambios intermitentes en el estado de alerta. Esto evidencia la necesidad de incorporar mecanismos que permitan mejorar su estabilidad en futuras iteraciones.

## Finalidad de la documentación

Los archivos de esta carpeta permiten respaldar experimentalmente el funcionamiento del sistema de alertas, conservar los registros originales y documentar los resultados obtenidos durante las pruebas.

De esta manera, se facilita la revisión del comportamiento del prototipo y la evaluación de su utilidad como sistema de alerta temprana frente a variaciones de turbidez del agua, contribuyendo al objetivo de monitoreo continuo planteado en el proyecto.
