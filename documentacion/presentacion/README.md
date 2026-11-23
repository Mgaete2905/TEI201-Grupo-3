# Presentación Final – Prototipo IoT de Monitoreo de Turbidez

## 1. Descripción general

Esta carpeta contiene la presentación correspondiente al **Avance #3 – Prototipo IoT Completo**, desarrollado por el Grupo 3 para la asignatura TEI201 – Taller de Diseño en Ingeniería de la Universidad Adolfo Ibáñez.

La presentación expone el desarrollo de un sistema IoT orientado al monitoreo de turbidez en ríos cercanos a pisciculturas de salmón, abordando la problemática ambiental, el diseño e integración del prototipo, las pruebas experimentales y los resultados obtenidos.

Su propósito es comunicar de manera visual y sintética el funcionamiento del sistema, sus capacidades de monitoreo remoto y sus principales limitaciones.

## 2. Archivo disponible

| Archivo | Descripción |
|---|---|
| `presentacion_final | Presentación del Avance #3, que documenta el desarrollo técnico, la evaluación experimental y la validación preliminar del prototipo. |

**Características:**

- **Formato:** PDF.
- **Extensión:** 20 diapositivas.
- **Idioma:** Español.
- **Asignatura:** TEI201 – Taller de Diseño en Ingeniería.
- **Etapa:** Avance #3 – Prototipo IoT Completo.

## 3. Integrantes del equipo

- Montserrat Gaete.
- Felipe Lagos.
- Alfonso Roselló.
- Alex Sabag.

**Profesor:** Benjamín Gutiérrez.

## 4. Estructura de la presentación

| Diapositivas | Contenido |
|---|---|
| 1 | Portada y presentación del proyecto. |
| 2 | Introducción a la demostración en vivo mediante ThingSpeak. |
| 3–5 | Problemática de la turbidez, sus impactos y la necesidad de monitoreo continuo. |
| 6–8 | Componentes electrónicos, esquema de conexiones y diseño para mantenimiento y reparación. |
| 9–10 | Funcionamiento del software y flujo de información entre el sensor, ESP8266, ThingSpeak y Telegram. |
| 11 | Metodología experimental y descripción de las pruebas realizadas. |
| 12–14 | Resultados de voltaje de referencia, estimación de NTU y evaluación del sistema de alertas. |
| 15–17 | Diseño mecánico, bandeja impresa en 3D, ensamblaje en Fusion 360 y vista explosionada. |
| 18 | Validación del prototipo frente a la problemática original. |
| 19 | Conclusiones, limitaciones y propuestas de mejora. |
| 20 | Cierre y preguntas. |

## 5. Contenidos técnicos principales

### 5.1. Problemática ambiental

Se presenta la turbidez como un indicador relacionado con la presencia de partículas suspendidas en el agua y se describen sus posibles causas naturales y productivas.

Se abordan sus implicancias ambientales, económicas y culturales, destacando la importancia de contar con registros continuos que permitan identificar episodios que podrían pasar inadvertidos entre campañas de muestreo.

### 5.2. Hardware del prototipo

Se presentan los componentes principales del sistema:

- Sensor óptico de turbidez G-008.
- Microcontrolador ESP8266 NodeMCU.
- Divisor de voltaje de 10 kΩ y 22 kΩ.
- Power bank de 10.000 mAh.
- Protoboard y cables Dupont.

También se incluye el esquema de conexiones y se explican las decisiones de diseño relacionadas con la protección de los componentes, su fijación y la facilidad de reparación.

### 5.3. Software y transmisión de datos

Se explica el funcionamiento del programa implementado en el ESP8266, desde la adquisición de señales hasta la generación de notificaciones.

El sistema realiza las siguientes operaciones:

1. Adquiere la señal analógica del sensor.
2. Promedia lecturas para reducir el ruido.
3. Calcula valores estimados de turbidez.
4. Transmite los registros a ThingSpeak aproximadamente cada 20 segundos.
5. Evalúa el umbral configurado y envía notificaciones mediante Telegram.

La presentación incluye un esquema del flujo de información y las principales librerías utilizadas.

### 5.4. Pruebas experimentales

Se describen tres etapas de evaluación:

**Prueba 1. Voltaje de referencia**

Caracterización de la respuesta del sensor en agua limpia, considerando un período inicial de estabilización y el posterior registro de mediciones.

**Prueba 2. Estimación de turbidez**

Evaluación de cinco concentraciones de caolín, con tres intentos por concentración, para obtener una relación entre el voltaje del sensor y los valores de turbidez de referencia bibliográfica.

**Prueba 3. Sistema de alertas**

Evaluación del comportamiento del umbral de turbidez y del tiempo transcurrido entre la activación de una alerta y la recepción de la notificación en Telegram.

### 5.5. Diseño mecánico y modelado 3D

Se presenta el diseño físico del prototipo, compuesto por una caja estanca comercial MGC EX225, una bandeja portacomponentes fabricada mediante impresión 3D y elementos de flotación.

Se incluyen:

- Características del encapsulado y del sistema de montaje.
- Dimensiones y fabricación de la bandeja.
- Vistas exterior e interior del modelo desarrollado en Fusion 360.
- Vista explosionada con identificación de los componentes.
- Consideraciones de desmontaje, mantenimiento y reparación.

### 5.6. Validación y conclusiones

Se analiza la capacidad del prototipo para detectar variaciones en la respuesta del sensor, almacenar información y emitir notificaciones automáticas.

También se identifican las limitaciones de la calibración experimental y las mejoras necesarias para una eventual implementación en terreno.

## 6. Principales resultados presentados

| Indicador | Resultado |
|---|---|
| Voltaje de referencia en agua limpia | 3,295 ± 0,076 V |
| Registros utilizados para determinar el voltaje de referencia | 36 |
| Concentraciones de caolín evaluadas | 105, 185, 265, 345 y 425 mg/L |
| Repeticiones por concentración | 3 |
| Ecuación de estimación | NTU = −262,37 × V + 911,39 |
| Coeficiente de determinación | R² ≈ 0,905 |
| Umbral experimental de alerta | 133,4 NTU |
| Tiempo observado de notificación | 10–13 segundos |
| Intervalo de transmisión | Aproximadamente 20 segundos |

Los resultados permiten evidenciar el funcionamiento integrado del sistema de adquisición, procesamiento, almacenamiento y notificación.

**Limitación experimental:** los valores de NTU corresponden a estimaciones obtenidas mediante una relación con referencias bibliográficas, sin calibración directa mediante un turbidímetro. Por ello, el prototipo se presenta como una herramienta experimental de monitoreo y alerta temprana, no como un instrumento certificado de medición de turbidez.


**Equipo:** Grupo 3

**Entrega:** Avance #3 – Prototipo IoT Completo
