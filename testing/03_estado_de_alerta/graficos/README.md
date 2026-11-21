# Gráficos – Evaluación del sistema de alertas

## Descripción

Esta carpeta contiene las imágenes de los gráficos obtenidos durante la evaluación experimental del sistema de alertas, correspondiente a la tercera etapa de pruebas del prototipo IoT de monitoreo de turbidez.

Los gráficos permiten visualizar la evolución de los NTU estimados y el estado de alerta (0/1), verificando el funcionamiento del sistema frente al umbral establecido de **133,4 NTU** y complementando los registros experimentales almacenados en la carpeta `datos_csv/`.

## Obtención de los gráficos

Durante las pruebas experimentales, las mediciones realizadas por el sensor G-008 fueron procesadas por el ESP8266 NodeMCU y transmitidas automáticamente a ThingSpeak mediante conexión Wi-Fi, con intervalos aproximados de 20 segundos.

Se realizaron **cinco ciclos experimentales**, utilizando agua limpia y soluciones de caolín de 185 y 345 mg/L, con mediciones de aproximadamente dos minutos por muestra.

## Contenido de la carpeta

La carpeta reúne los gráficos correspondientes a los cinco ciclos experimentales.

Para cada ciclo se presentan dos gráficos:

- **Gráfico de NTU estimados:** permite observar las variaciones de turbidez y reconocer cuándo los valores superan el umbral de 133,4 NTU.
- **Gráfico del estado de alerta:** permite identificar los momentos en que el sistema activa o desactiva la alerta.

Ambos gráficos permiten comparar visualmente las mediciones de turbidez con la respuesta del sistema de alertas.

## Utilización de los gráficos

Las imágenes permiten verificar la correspondencia entre los valores de NTU estimados y la activación de las alertas, además de identificar fluctuaciones alrededor del umbral que pueden ocasionar cambios intermitentes en su estado.

Estos registros complementan el análisis cuantitativo realizado a partir de los archivos CSV y se conservan como respaldo visual del funcionamiento del sistema de alertas del prototipo.
