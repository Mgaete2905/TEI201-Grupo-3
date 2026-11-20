# Gráficos – Caracterización del voltaje

## Descripción

Esta carpeta contiene las imágenes de los gráficos obtenidos durante la caracterización experimental del sensor de turbidez G-008, correspondiente a la primera etapa de pruebas del prototipo IoT.

Los gráficos permiten visualizar el comportamiento del voltaje registrado por el sensor frente a distintas concentraciones de caolín en agua, complementando los datos experimentales almacenados en la carpeta `datos_csv/`.

## Obtención de los gráficos

Durante las pruebas experimentales, las mediciones realizadas por el sensor fueron transmitidas automáticamente desde el ESP8266 NodeMCU a la plataforma ThingSpeak, con intervalos aproximados de 20 segundos.

Se evaluaron cinco concentraciones de caolín: **105, 185, 265, 345 y 425 mg/L**, realizando tres intentos de aproximadamente tres minutos por concentración.

ThingSpeak permitió visualizar gráficamente la evolución de las mediciones durante cada intento. Las imágenes de estos gráficos se conservaron como evidencia del comportamiento del sensor y de los registros obtenidos.

## Contenido de la carpeta

La carpeta reúne los gráficos individuales correspondientes a las mediciones experimentales.

Cada imagen representa la evolución de las lecturas registradas durante un intento, permitiendo observar las variaciones del voltaje a lo largo del tiempo.

Los archivos se identifican según la concentración de caolín y el número de intento, utilizando una nomenclatura equivalente a la de los archivos CSV.

Por ejemplo:

- `105V_1.png`: gráfico del primer intento de 105 mg/L.
- `105V_2.png`: gráfico del segundo intento de 105 mg/L.
- `105V_3.png`: gráfico del tercer intento de 105 mg/L.

El mismo criterio se aplica a las demás concentraciones evaluadas.

## Utilización de los gráficos

Las imágenes permiten visualizar la evolución temporal de las mediciones y reconocer posibles fluctuaciones de la señal durante cada prueba.

Estos registros complementan el análisis cuantitativo realizado a partir de los archivos CSV, utilizados para calcular los voltajes promedio y estudiar la respuesta del sensor frente a distintas concentraciones de caolín.

Los gráficos individuales se conservan como respaldo visual de las pruebas, mientras que los gráficos comparativos y los ajustes utilizados para obtener la ecuación de conversión se presentan en los resultados consolidados del proyecto.
