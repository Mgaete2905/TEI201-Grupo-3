# 01 – Caracterización experimental del voltaje

## Descripción

Esta carpeta reúne los datos y registros gráficos correspondientes a la primera etapa de caracterización experimental del sensor de turbidez G-008, utilizado en el prototipo IoT desarrollado para el proyecto TEI201 – Taller de Diseño en Ingeniería.

El propósito de esta etapa fue estudiar la respuesta eléctrica del sensor frente a distintas concentraciones de partículas suspendidas en agua, con el fin de obtener información experimental que permitiera establecer posteriormente una relación entre el voltaje registrado y la turbidez estimada.

## Metodología general

Inicialmente, se realizó una prueba utilizando agua limpia para determinar el voltaje de referencia del sensor (V₀) y evaluar la estabilidad de las mediciones.

Posteriormente, se prepararon muestras de agua con concentraciones de **105, 185, 265, 345 y 425 mg/L de caolín**, realizando tres intentos de aproximadamente tres minutos por concentración.

Durante las pruebas, el sensor G-008 registró las variaciones de voltaje, mientras que el ESP8266 NodeMCU transmitió automáticamente los datos a la plataforma ThingSpeak mediante conexión Wi-Fi.

Los registros fueron exportados en formato CSV y se conservaron los gráficos generados durante las mediciones.

## Organización de la carpeta

### `datos_csv/`

Contiene los archivos CSV exportados desde ThingSpeak, correspondientes a las mediciones realizadas con agua limpia y con las distintas concentraciones de caolín.

Estos registros se utilizaron para calcular los voltajes promedio de cada intento y analizar cuantitativamente el comportamiento del sensor.

La subcarpeta incluye un README con una descripción detallada del procedimiento experimental y la organización de los archivos.

### `graficos/`

Contiene las imágenes de los gráficos obtenidos durante las pruebas, donde se visualiza la evolución temporal de las mediciones registradas.

Estas imágenes permiten observar las fluctuaciones del voltaje y constituyen un respaldo visual de los datos experimentales.

La subcarpeta incluye un README que describe el contenido y la finalidad de los gráficos.

## Resultados de la caracterización

Las mediciones permitieron identificar una tendencia decreciente del voltaje a medida que aumentaba la concentración de caolín, evidenciando la respuesta del sensor frente a las variaciones de partículas suspendidas.

A partir de los voltajes promedio experimentales y de valores bibliográficos de turbidez, se desarrolló posteriormente una ecuación de conversión para estimar la turbidez en NTU.

Esta relación se incorporó al software del prototipo y se evaluó mediante nuevas pruebas, cuyos registros se encuentran organizados en la etapa `02_evaluacion_NTU/`.

## Finalidad de la documentación

Los archivos de esta carpeta permiten conservar la trazabilidad de las mediciones iniciales, respaldar los resultados utilizados en el informe y documentar el proceso de caracterización del sensor.

De esta manera, se facilita la revisión de los datos originales y la comprensión de las decisiones experimentales que sustentaron el desarrollo del prototipo.
