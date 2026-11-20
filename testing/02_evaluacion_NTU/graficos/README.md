# Gráficos – Evaluación de NTU

## Descripción

Esta carpeta contiene las imágenes de los gráficos obtenidos durante la segunda etapa de pruebas experimentales del prototipo IoT de monitoreo de turbidez, desarrollado para el proyecto TEI201 – Taller de Diseño en Ingeniería.

Los gráficos permiten visualizar la evolución de los valores de turbidez estimados por el sensor G-008 mediante la ecuación de conversión implementada en el ESP8266 NodeMCU.

Estas imágenes complementan los registros experimentales almacenados en la carpeta `datos_csv/` y constituyen evidencia visual de las mediciones realizadas.

## Obtención de los gráficos

Durante las pruebas, el prototipo registró los valores de turbidez estimados en unidades nefelométricas de turbidez (NTU) y los transmitió automáticamente a la plataforma ThingSpeak mediante conexión Wi-Fi, con intervalos aproximados de 20 segundos.

Se evaluaron cinco concentraciones de caolín: **105, 185, 265, 345 y 425 mg/L**, realizando tres intentos de aproximadamente tres minutos por concentración.

ThingSpeak permitió representar gráficamente las mediciones registradas durante cada intento, mostrando las variaciones de turbidez estimada a lo largo del tiempo.

Las imágenes de estos gráficos se conservaron como respaldo visual de las pruebas experimentales.

## Contenido de la carpeta

La carpeta reúne los gráficos individuales correspondientes a las mediciones de turbidez estimada.

Cada imagen representa la evolución temporal de los NTU registrados durante un intento, permitiendo observar las fluctuaciones de las lecturas y su comportamiento durante la prueba.

Los archivos se identifican según la concentración de caolín y el número de intento, utilizando una nomenclatura equivalente a la de los archivos CSV.

Por ejemplo:

- `105NTU_1.png`: gráfico del primer intento de 105 mg/L.
- `105NTU_2.png`: gráfico del segundo intento de 105 mg/L.
- `105NTU_3.png`: gráfico del tercer intento de 105 mg/L.

El mismo criterio se aplica a las concentraciones de 185, 265, 345 y 425 mg/L.

## Utilización de los gráficos

Las imágenes permiten observar la evolución temporal de los NTU estimados y reconocer posibles fluctuaciones durante las mediciones.

Estos registros complementan el análisis cuantitativo realizado a partir de los archivos CSV, utilizados para calcular los promedios de NTU de cada intento, las desviaciones estándar y las diferencias porcentuales respecto de los valores bibliográficos.

Los gráficos individuales se conservan como evidencia experimental, mientras que las tablas comparativas y los gráficos generales elaborados a partir de estos datos se encuentran disponibles en la carpeta `03_resultados_consolidados/`.

Asimismo, el análisis y la interpretación de los resultados se presentan en la sección **5.3, «Evaluación de los NTU estimados»**, del informe técnico del proyecto.

## Consideraciones

Las imágenes corresponden a representaciones gráficas de los registros obtenidos mediante ThingSpeak y no constituyen mediciones independientes de los archivos CSV.

Las variaciones observadas pueden estar relacionadas con factores experimentales, como la sedimentación de las partículas de caolín, las condiciones de agitación de las muestras y la estabilidad de la señal del sensor.

Por lo tanto, estos gráficos permiten complementar la evaluación del comportamiento del prototipo y facilitar la revisión visual de las mediciones realizadas.
