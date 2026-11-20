# 02 – Evaluación experimental de NTU

## Descripción

Esta carpeta reúne los datos y registros gráficos correspondientes a la segunda etapa de evaluación experimental del sensor de turbidez G-008, utilizado en el prototipo IoT desarrollado para el proyecto TEI201 – Taller de Diseño en Ingeniería.

El propósito de esta etapa fue evaluar el funcionamiento de la ecuación de conversión obtenida durante la caracterización inicial, la cual permite estimar la turbidez del agua en unidades nefelométricas de turbidez (NTU) a partir del voltaje registrado por el sensor.

A diferencia de la primera etapa, enfocada en estudiar la respuesta eléctrica del sensor, esta evaluación permitió analizar la repetibilidad de las mediciones y su concordancia con los valores de turbidez reportados en la bibliografía.

## Metodología general

Una vez incorporada la ecuación de conversión al software del ESP8266 NodeMCU, se realizaron nuevas mediciones utilizando muestras de agua con concentraciones de **105, 185, 265, 345 y 425 mg/L de caolín**.

Cada concentración se evaluó mediante tres intentos de aproximadamente tres minutos, registrando automáticamente los valores de NTU estimados en la plataforma ThingSpeak mediante conexión Wi-Fi, con intervalos cercanos a 20 segundos.

Posteriormente, los registros fueron exportados en formato CSV para su procesamiento y se conservaron las imágenes de los gráficos generados durante cada prueba.

Para cada concentración se calcularon los promedios de los intentos, la desviación estándar entre dichos promedios y la diferencia porcentual relativa respecto del valor bibliográfico correspondiente.

## Organización de la carpeta

### `datos_csv/`

Contiene los archivos CSV exportados desde ThingSpeak, correspondientes a los registros de turbidez estimada durante las pruebas experimentales.

Estos datos se utilizaron para calcular los promedios de NTU, analizar la variabilidad entre intentos y comparar los resultados con los valores bibliográficos.

La subcarpeta incluye un README con una descripción detallada del procedimiento, el procesamiento de los datos y la tabla comparativa de resultados.

### `graficos/`

Contiene las imágenes de los gráficos obtenidos mediante ThingSpeak, donde se representa la evolución temporal de los NTU estimados durante cada intento.

Estas imágenes constituyen evidencia visual de las mediciones realizadas y permiten observar las fluctuaciones registradas durante las pruebas.

La subcarpeta incluye un README que describe la finalidad y organización de los gráficos.

## Resultados de la evaluación

Los resultados permitieron observar que los valores estimados por el prototipo presentaron una tendencia general de aumento al incrementar la concentración de caolín, aunque se identificaron diferencias respecto de los valores bibliográficos.

Las concentraciones de 185 y 425 mg/L presentaron las menores diferencias porcentuales, cercanas al 4,26 %, mientras que las de 105 y 265 mg/L registraron diferencias superiores al 48 %.

Asimismo, el análisis de las desviaciones estándar permitió evaluar la repetibilidad de las mediciones e identificar diferencias en la dispersión de los resultados entre las distintas concentraciones.

Los resultados completos, las tablas comparativas y los gráficos generales se encuentran disponibles en la carpeta `03_resultados_consolidados/`.

El análisis detallado y la interpretación de estos resultados también se presentan en la sección **5.3, «Evaluación de los NTU estimados»**, del informe técnico del proyecto.

## Consideraciones experimentales

Los valores de turbidez utilizados como referencia provienen de información bibliográfica, debido a que no se dispuso de un turbidímetro para realizar mediciones directas de las muestras.

Por lo tanto, esta etapa permitió evaluar preliminarmente la concordancia y repetibilidad de las estimaciones del prototipo, pero no constituye una validación independiente de su exactitud.

Además, factores como la sedimentación del caolín y las condiciones de agitación de las muestras pudieron influir en la variabilidad de los resultados.

## Finalidad de la documentación

Los archivos de esta carpeta permiten conservar la trazabilidad de las pruebas realizadas con la ecuación de conversión implementada, respaldar los resultados presentados en el informe técnico y documentar el comportamiento experimental del prototipo.

De esta manera, se facilita la revisión de las mediciones originales y la comprensión del proceso de evaluación desarrollado durante esta etapa del proyecto.
