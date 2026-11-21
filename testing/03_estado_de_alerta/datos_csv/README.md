# Datos experimentales – Evaluación del sistema de alertas

## Descripción

Esta carpeta contiene los archivos CSV correspondientes a las mediciones experimentales realizadas durante la evaluación del sistema de alertas del prototipo IoT de monitoreo de turbidez, desarrollado para el proyecto TEI201 – Taller de Diseño en Ingeniería.

El objetivo de esta etapa fue verificar que el sistema detectara variaciones de turbidez, activara una alerta al superar el umbral de **133,4 NTU** y enviara notificaciones automáticas mediante Telegram.

Los registros permitieron analizar la evolución de la turbidez estimada y comprobar la correspondencia entre los valores de NTU y el estado de alerta.

## Procedimiento experimental

### 1. Preparación de las muestras

Se utilizaron tres condiciones experimentales:

| Muestra | Condición |
|---|---|
| 1 | Agua limpia |
| 2 | Caolín 185 mg/L |
| 3 | Caolín 345 mg/L |

Estas muestras permitieron evaluar el funcionamiento del sistema frente a diferentes niveles de turbidez.

### 2. Registro de las mediciones

Se realizaron **cinco ciclos experimentales**, cada uno compuesto por mediciones consecutivas de las tres muestras, durante aproximadamente dos minutos por muestra.

Durante cada ciclo, el sensor G-008 registró las variaciones de turbidez y el ESP8266 NodeMCU transmitió automáticamente los datos a ThingSpeak mediante conexión Wi-Fi, con intervalos aproximados de 20 segundos.

El sistema comparó los NTU estimados con el umbral programado y registró el estado de alerta:

- **0:** alerta desactivada.
- **1:** alerta activada al superar los 133,4 NTU.

Cuando se activaba la alerta, se generaba una notificación mediante Telegram.

### 3. Exportación y procesamiento

Al finalizar cada ciclo, los registros fueron exportados desde ThingSpeak en formato CSV.

Los datos se agruparon según las etapas experimentales y se calcularon los promedios aproximados de NTU estimados para cada muestra.

Posteriormente, se compararon los valores registrados con el estado de alerta para verificar su funcionamiento.

## Organización de los archivos

La carpeta contiene **cinco archivos CSV**, correspondientes a los cinco ciclos experimentales realizados.

Cada archivo incluye las marcas de tiempo y los siguientes campos exportados desde ThingSpeak:

| Campo | Información registrada |
|---|---|
| Field 3 | Turbidez estimada (NTU) |
| Field 4 | Estado de alerta (0/1) |

Los archivos permiten revisar la evolución temporal de las mediciones y los cambios en el estado de alerta.

## Procesamiento y utilización de los datos

Los registros se utilizaron para calcular los promedios aproximados de turbidez de las tres condiciones experimentales.

| Muestra | NTU promedio estimados |
|---|---:|
| Agua limpia | 75,4 |
| Caolín 185 mg/L | 147,8 |
| Caolín 345 mg/L | 203,3 |

A partir de estos datos se elaboraron gráficos de evolución temporal de los NTU estimados y del estado de alerta (0/1), permitiendo visualizar el comportamiento del sistema respecto del umbral de 133,4 NTU.

Las pruebas permitieron comprobar la activación de las alertas y la recepción de notificaciones mediante Telegram, con tiempos observados de aproximadamente **10 a 13 segundos** desde la activación registrada.

## Consideraciones

Los archivos CSV corresponden a los registros originales exportados desde ThingSpeak y se conservan como evidencia experimental del funcionamiento del sistema.

Los promedios por muestra son aproximados debido a que los cambios manuales entre recipientes no quedaron identificados con exactitud en los registros.

Se observaron fluctuaciones alrededor del umbral que ocasionaron cambios intermitentes en el estado de alerta, evidenciando la necesidad de mejorar su estabilidad en futuras iteraciones.

Los tiempos de recepción de Telegram corresponden a observaciones realizadas durante las pruebas y no a una medición sistemática de latencia.
