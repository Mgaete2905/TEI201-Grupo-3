# Datos experimentales – Caracterización del voltaje

## Descripción

Esta carpeta contiene los archivos CSV correspondientes a las mediciones experimentales realizadas durante la caracterización inicial del sensor de turbidez G-008, utilizado en el prototipo IoT desarrollado para el proyecto TEI201 – Taller de Diseño en Ingeniería.

El objetivo de esta etapa fue analizar la respuesta del sensor frente a distintas concentraciones de caolín en agua, identificando cómo varía el voltaje registrado al aumentar la cantidad de partículas suspendidas.

Los datos obtenidos permitieron estudiar el comportamiento del sensor y establecer posteriormente una ecuación para estimar la turbidez en unidades nefelométricas de turbidez (NTU).

## Procedimiento experimental

### 1. Determinación del voltaje de referencia

Inicialmente, se realizó una medición utilizando agua limpia, con el propósito de establecer un voltaje de referencia (V₀) y evaluar la estabilidad de las lecturas.

La sonda se mantuvo sumergida e inmóvil, mientras el sistema registraba automáticamente los datos en ThingSpeak mediante una placa ESP8266 NodeMCU.

La prueba tuvo una duración aproximada de 15 minutos, considerando:

- **5 minutos iniciales:** estabilización del sensor.
- **10 minutos posteriores:** registro y análisis de las mediciones.
- **Frecuencia de registro:** aproximadamente cada 20 segundos.

A partir de 36 registros analizados, se obtuvo un voltaje de referencia de **(3,295 ± 0,076) V**, donde la desviación estándar representa la dispersión de las lecturas.

### 2. Preparación de las muestras

Posteriormente, se prepararon muestras de agua con cinco concentraciones diferentes de caolín:

| Muestra | Concentración de caolín |
|---|---:|
| 1 | 105 mg/L |
| 2 | 185 mg/L |
| 3 | 265 mg/L |
| 4 | 345 mg/L |
| 5 | 425 mg/L |

El caolín se utilizó para generar distintas concentraciones de partículas suspendidas y analizar su efecto sobre la señal eléctrica del sensor.

### 3. Registro de las mediciones

Cada concentración fue evaluada mediante **tres intentos independientes de aproximadamente tres minutos**.

Durante cada intento, el ESP8266 registró las mediciones del sensor y las transmitió a ThingSpeak mediante conexión Wi-Fi.

Los registros se exportaron posteriormente en formato CSV para su procesamiento y análisis.

Para cada intento se calculó el voltaje promedio a partir de las lecturas registradas. Posteriormente, se obtuvo un promedio general de los tres intentos correspondientes a cada concentración.

## Organización de los archivos

Los archivos CSV se encuentran identificados según la concentración de caolín y el número de intento.

Por ejemplo:

- `105V_1.csv`: primer intento de la muestra de 105 mg/L.
- `105V_2.csv`: segundo intento de la muestra de 105 mg/L.
- `105V_3.csv`: tercer intento de la muestra de 105 mg/L.

Se utiliza el mismo criterio para las concentraciones de 185, 265, 345 y 425 mg/L.

Cada archivo contiene los registros exportados desde ThingSpeak correspondientes a una medición experimental.

## Procesamiento y utilización de los datos

Los archivos de esta carpeta constituyen los registros experimentales utilizados para calcular los voltajes promedio de cada concentración.

A partir de estos resultados, se elaboró un gráfico de voltaje promedio en función de la concentración de caolín, con el propósito de analizar la tendencia de respuesta del sensor.

Posteriormente, los voltajes experimentales se relacionaron con valores bibliográficos de turbidez para obtener una ecuación de conversión entre voltaje y NTU.

Esta ecuación fue incorporada al software del prototipo para permitir la estimación automática de turbidez durante las pruebas posteriores.

## Consideraciones

Los archivos CSV corresponden a los registros originales exportados desde ThingSpeak y se conservan como evidencia de las mediciones realizadas.

Los valores de NTU utilizados posteriormente como referencia provienen de información bibliográfica, debido a que no se dispuso de un turbidímetro para medir directamente la turbidez de las muestras.

Por lo tanto, esta etapa corresponde a una caracterización experimental de la respuesta eléctrica del sensor y no a una calibración independiente de turbidez mediante un instrumento de referencia.
