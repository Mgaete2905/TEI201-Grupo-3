# Gráficos – Evaluación del sistema de alertas

## Descripción

Esta carpeta contiene las imágenes de los gráficos obtenidos durante la evaluación experimental del sistema de alertas, correspondiente a la tercera etapa de pruebas del prototipo IoT de monitoreo de turbidez.

Los gráficos permiten visualizar la evolución de los NTU estimados y el estado de alerta (0/1), verificando el funcionamiento del sistema frente al umbral establecido de **133,4 NTU** y complementando los registros experimentales almacenados en la carpeta `datos_csv/`.

## Obtención de los gráficos

Durante las pruebas experimentales, las mediciones realizadas por el sensor G-008 fueron procesadas por el ESP8266 NodeMCU y transmitidas automáticamente a ThingSpeak mediante conexión Wi-Fi, con intervalos aproximados de 20 segundos.

Se realizaron **cinco ciclos experimentales**, utilizando agua limpia y soluciones de caolín de 185 y 345 mg/L, con mediciones de aproximadamente dos minutos por muestra.

ThingSpeak permitió visualizar gráficamente dos variables:

- **NTU estimados (Field 3):** evolución temporal de la turbidez estimada durante las mediciones.
- **Estado de alerta (Field 4):** activación (1) o desactivación (0) de la alerta según el umbral programado.

Las imágenes se conservaron como evidencia visual del comportamiento del sistema durante las pruebas.

## Contenido de la carpeta

La carpeta reúne los gráficos correspondientes a los cinco ciclos experimentales.

Para cada ciclo se presentan dos gráficos:

- **Gráfico de NTU estimados:** permite observar las variaciones de turbidez y reconocer cuándo los valores superan el umbral de 133,4 NTU.
- **Gráfico del estado de alerta:** permite identificar los momentos en que el sistema activa o desactiva la alerta.

Ambos gráficos permiten comparar visualmente las mediciones de turbidez con la respuesta del sistema de alertas.

## Utilización de los gráficos

Las imágenes permiten verificar la correspondencia entre los valores de NTU estimados y la activación de las alertas, además de identificar fluctuaciones alrededor del umbral que pueden ocasionar cambios intermitentes en su estado.

Durante las pruebas también se comprobó la recepción de notificaciones mediante Telegram, con tiempos observados de aproximadamente **10 a 13 segundos** desde la activación registrada. Este tiempo corresponde a una observación experimental y no se obtiene directamente de los gráficos.

Estos registros complementan el análisis cuantitativo realizado a partir de los archivos CSV y se conservan como respaldo visual del funcionamiento del sistema de alertas del prototipo.
