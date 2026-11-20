# Datos experimentales – Evaluación de NTU

## Descripción

Esta carpeta contiene los archivos CSV correspondientes a la segunda etapa de pruebas experimentales del sensor de turbidez G-008, desarrollado como parte del prototipo IoT del proyecto TEI201 – Taller de Diseño en Ingeniería.

A diferencia de la caracterización inicial del voltaje, en esta etapa se evaluó el funcionamiento de la ecuación de conversión previamente implementada en el sistema, la cual permite estimar la turbidez del agua en unidades nefelométricas de turbidez (NTU) a partir del voltaje registrado por el sensor.

El objetivo fue analizar la repetibilidad de las mediciones y comparar los valores estimados por el prototipo con los valores de referencia obtenidos de la bibliografía.

## Procedimiento experimental

### 1. Implementación de la ecuación de conversión

A partir de los resultados de la caracterización inicial y de los valores bibliográficos de turbidez, se obtuvo una relación lineal entre el voltaje del sensor y los NTU estimados:

**NTU estimados = −262,3654 × V + 911,3936**

Esta ecuación se incorporó al código del ESP8266 NodeMCU, permitiendo que el prototipo calculara automáticamente la turbidez estimada a partir de las mediciones del sensor G-008.

Los valores obtenidos se transmitieron mediante Wi-Fi a ThingSpeak, donde fueron almacenados para su posterior análisis.

### 2. Preparación de las muestras

Se realizaron nuevas mediciones utilizando muestras de agua con cinco concentraciones de caolín:

| Muestra | Concentración de caolín |
|---|---:|
| 1 | 105 mg/L |
| 2 | 185 mg/L |
| 3 | 265 mg/L |
| 4 | 345 mg/L |
| 5 | 425 mg/L |

Estas concentraciones corresponden a las utilizadas durante la caracterización inicial, lo que permitió comparar los resultados obtenidos en ambas etapas.

### 3. Registro de las mediciones

Cada concentración se evaluó mediante **tres intentos de aproximadamente tres minutos**, registrando automáticamente los valores de NTU estimados en ThingSpeak a intervalos cercanos a 20 segundos.

Una vez finalizadas las pruebas, los registros fueron exportados en formato CSV para su procesamiento.

En la concentración de 425 mg/L se realizaron intentos adicionales debido a modificaciones en las condiciones de agitación de la muestra. Para el análisis final se consideraron los últimos tres intentos, correspondientes al procedimiento de menor agitación.

## Organización de los archivos

Los archivos CSV se identifican según la concentración de caolín y el número de intento.

Por ejemplo:

- `105NTU_1.csv`: primer intento de la muestra de 105 mg/L.
- `105NTU_2.csv`: segundo intento de la muestra de 105 mg/L.
- `105NTU_3.csv`: tercer intento de la muestra de 105 mg/L.

Se utiliza el mismo criterio para las concentraciones de 185, 265, 345 y 425 mg/L.

Cada archivo contiene los registros exportados desde ThingSpeak durante una prueba experimental.

## Procesamiento de los datos

A partir de los archivos CSV se calcularon los valores promedio de NTU correspondientes a cada intento.

Posteriormente, para cada concentración se obtuvo el promedio general de los tres intentos y la desviación estándar muestral entre dichos promedios.

La desviación estándar permitió analizar la dispersión de los resultados y evaluar la repetibilidad de las mediciones realizadas bajo una misma concentración.

Adicionalmente, se calculó la diferencia porcentual relativa entre el promedio experimental y el valor bibliográfico correspondiente, mediante la expresión:

**Diferencia (%) = |NTU estimados − NTU bibliográficos| / NTU bibliográficos × 100**

Este cálculo permitió cuantificar la concordancia entre los valores obtenidos por el prototipo y las referencias utilizadas.

## Resultados de la evaluación

A partir del procesamiento de los registros experimentales, se obtuvieron los valores promedio de turbidez estimada para cada concentración de caolín, junto con sus respectivas desviaciones estándar.

Estos resultados se compararon con los valores bibliográficos de referencia, calculando la diferencia porcentual relativa para evaluar la concordancia entre ambos conjuntos de datos.

**Tabla 4. Comparación de los NTU bibliográficos y experimentales, desviación estándar y diferencia porcentual.**

| Caolín (mg/L) | NTU bibliográficos | NTU estimados ± desviación estándar | Diferencia (%) |
|---:|---:|---:|---:|
| 105 | 48,71 | 73,86 ± 16,60 | 51,64 % |
| 185 | 99,97 | 95,71 ± 5,88 | 4,26 % |
| 265 | 125,90 | 186,94 ± 9,92 | 48,48 % |
| 345 | 185,00 | 149,00 ± 2,89 | 19,46 % |
| 425 | 220,20 | 229,59 ± 19,09 | 4,26 % |

Los resultados muestran diferencias en la concordancia de las estimaciones según la concentración evaluada. Las muestras de 185 y 425 mg/L presentaron las menores diferencias porcentuales, mientras que las de 105 y 265 mg/L registraron las mayores.

Asimismo, las desviaciones estándar permitieron identificar variaciones en la repetibilidad de las mediciones, evidenciando que una menor dispersión entre intentos no implica necesariamente una mayor proximidad al valor bibliográfico.

**Los resultados completos, las tablas comparativas y los gráficos elaborados a partir de estas mediciones se encuentran disponibles en la carpeta `03_resultados_consolidados/`. Asimismo, el análisis y la interpretación de los resultados se presentan en la sección 5.3, «Evaluación de los NTU estimados», del informe técnico del proyecto.**

## Consideraciones experimentales

Los archivos CSV se conservan como respaldo de las mediciones realizadas y permiten consultar los registros originales utilizados durante el procesamiento.

Es importante considerar que los valores bibliográficos utilizados como referencia no corresponden a mediciones directas de las muestras mediante un turbidímetro. Por lo tanto, las diferencias porcentuales calculadas representan la concordancia con dicha referencia y no una determinación independiente de la exactitud del sensor.

Asimismo, factores como la sedimentación del caolín, las condiciones de agitación y la variabilidad de las lecturas pueden influir en los resultados experimentales.
