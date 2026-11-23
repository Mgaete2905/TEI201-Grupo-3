# Informe Final – Prototipo IoT de Monitoreo de Turbidez

## 1. Descripción general

Esta carpeta contiene el informe técnico correspondiente al **Avance 03 – Prototipo IoT Completo**, desarrollado para la asignatura **TEI201 – Taller de Diseño en Ingeniería, Sección 4**.

El proyecto consiste en el diseño, construcción y evaluación experimental de un sistema IoT para monitorear variaciones en la turbidez del agua, orientado a contribuir a la detección temprana de posibles alteraciones en cuerpos de agua dulce asociados a actividades de salmonicultura.

La propuesta se relaciona con el **Objetivo de Desarrollo Sostenible 14: Vida Submarina**, particularmente con la meta 14.1, vinculada a la reducción de la contaminación marina.

El informe documenta la problemática ambiental, el desarrollo del hardware y software, el diseño mecánico, las pruebas experimentales, los resultados obtenidos y las principales limitaciones identificadas.

## 2. Archivo disponible

| Archivo | Descripción |
|---|---|
| `informe_final.pdf` | Informe técnico del Avance 03, que documenta el desarrollo, integración y validación experimental del prototipo IoT. |

**Características del documento:**

- Formato: PDF.
- Extensión de la versión documentada: 30 páginas.
- Idioma: Español.
- Fecha: 23 de noviembre de 2026.
- Asignatura: TEI201 – Taller de Diseño en Ingeniería.

## 3. Integrantes del equipo

- Montserrat Gaete Hernández.
- Felipe Lagos Guíñez.
- Alfonso Roselló Aceituno.
- Alex Sabag Romero.

**Profesor encargado:** Benjamín Gutiérrez Moraga.

## 4. Contenido del informe

### 4.1. Contexto de la problemática

Se presenta el concepto de turbidez, sus principales causas y los efectos que pueden producir las partículas suspendidas en los ecosistemas acuáticos.

Se examina la relación entre la calidad del agua, las actividades de salmonicultura y sus posibles consecuencias ambientales, económicas y culturales.

### 4.2. Desarrollo del software

Se documenta la implementación del sistema de adquisición, procesamiento, transmisión y almacenamiento de mediciones mediante el microcontrolador ESP8266 NodeMCU.

El sistema utiliza:

- **Arduino IDE:** programación del microcontrolador.
- **ThingSpeak:** almacenamiento y visualización de mediciones.
- **Telegram:** recepción de notificaciones automáticas.
- **Conexión Wi-Fi:** transmisión remota de información.

El dashboard permite visualizar el voltaje del sensor, la razón respecto del voltaje de referencia, la turbidez estimada y el estado de alerta.

Las mediciones se transmiten aproximadamente cada 20 segundos.

### 4.3. Desarrollo del hardware

Se describe la selección e integración de los componentes electrónicos del prototipo, incluyendo:

- Microcontrolador ESP8266 NodeMCU.
- Sensor óptico de turbidez G-008.
- Circuito divisor de voltaje.
- Protoboard y conexiones Dupont.
- Batería externa de 10.000 mAh.
- Encapsulado de protección y sistema de flotación.

El informe incorpora el diagrama de conexiones, la lista de materiales (BOM), el montaje físico y las consideraciones de mantenimiento y reparación.

### 4.4. Diseño y modelado 3D

Se documenta el diseño mecánico realizado mediante Autodesk Fusion 360, considerando la distribución de los componentes electrónicos y su integración dentro del encapsulado.

El diseño incluye:

- Encapsulado comercial de 255 × 200 × 80 mm.
- Bandeja portacomponentes de 174 × 158 × 4 mm.
- Modelo tridimensional del ensamblaje.
- Vista explosionada de los componentes.
- Planos técnicos de fabricación y montaje.

La bandeja fue preparada para fabricación mediante impresión 3D utilizando una Bambu Lab A1 mini y Bambu Studio.

### 4.5. Testing y validación experimental

Se documentan las pruebas realizadas para caracterizar la respuesta del sensor y evaluar el funcionamiento del sistema de monitoreo.

Los ensayos comprenden:

1. Determinación del voltaje de referencia en agua limpia.
2. Evaluación de cinco concentraciones de caolín: 105, 185, 265, 345 y 425 mg/L.
3. Obtención de una ecuación de conversión para estimar la turbidez en NTU.
4. Comparación de los NTU estimados con referencias bibliográficas.
5. Evaluación experimental del sistema de alertas.
6. Análisis cuantitativo de resultados, limitaciones y propuestas de mejora.

### 4.6. Conclusiones y propuestas de mejora

El informe analiza el cumplimiento de las funciones de monitoreo remoto, almacenamiento de datos y generación de alertas.

También identifica las limitaciones de la estimación de turbidez y propone mejoras relacionadas con la calibración, la estabilidad de las mediciones, el control de las condiciones experimentales y la confiabilidad del sistema de notificaciones.

## 5. Principales resultados experimentales

| Indicador | Resultado |
|---|---|
| Voltaje de referencia en agua limpia | 3,295 ± 0,076 V |
| Concentraciones de caolín evaluadas | 5 |
| Repeticiones por concentración | 3 |
| Duración aproximada de cada ensayo | 3 minutos |
| Modelo de estimación | NTU = −262,3654 × V + 911,3936 |
| Coeficiente de determinación del ajuste | R² ≈ 0,905 |
| Umbral experimental de alerta | 133,4 NTU |
| Ciclos de evaluación de alertas | 5 |
| Tiempo observado de notificación | Aproximadamente 10–13 segundos |

Los resultados muestran que el sensor responde a variaciones en la concentración de partículas suspendidas y que el sistema permite registrar mediciones y comunicar alertas de manera remota.

**Limitación importante:** debido a que no se utilizó un turbidímetro de referencia para medir directamente las muestras, los valores expresados en NTU corresponden a estimaciones obtenidas mediante una relación con datos bibliográficos. Por lo tanto, no deben interpretarse como mediciones certificadas de turbidez ni como una validación independiente de la exactitud del sensor.

## 6. Alcance de la validación

Las pruebas realizadas permiten evaluar preliminarmente el funcionamiento del prototipo en condiciones controladas.

Se verificó la adquisición de señales del sensor, la transmisión de información a ThingSpeak y la recepción de notificaciones mediante Telegram.

Sin embargo, el prototipo todavía requiere calibración con un instrumento de referencia y ensayos en condiciones ambientales reales para determinar su exactitud, estabilidad y confiabilidad a largo plazo.

Por ello, su aplicación actual se considera principalmente **experimental y orientada a la detección de variaciones y generación de alertas tempranas**.

## 7. Referencias y fuentes

El informe incluye bibliografía científica, documentación técnica y antecedentes ambientales utilizados para fundamentar la problemática y analizar los resultados.

Las referencias completas se encuentran en la sección 

