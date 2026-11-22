# Reportes de Testing

**Proyecto:** Prototipo IoT de monitoreo de turbidez del agua  
**Asignatura:** TEI201 – Taller de Diseño en Ingeniería  
**Etapa:** Avance #3 – Testing y Validación  
**ODS asociado:** ODS 14 – Vida Submarina, meta 14.1

Esta carpeta contiene la evidencia fotográfica y una síntesis de las pruebas experimentales realizadas para evaluar el funcionamiento del prototipo IoT, desarrollado como una propuesta de monitoreo de turbidez en cuerpos de agua asociados a la fase de agua dulce de la salmonicultura.

## 1. Introducción

### Objetivo del testing

Evaluar experimentalmente el funcionamiento del prototipo IoT mediante la caracterización del sensor de turbidez G-008, la estimación de valores de turbidez y la verificación de su capacidad para detectar variaciones, almacenar mediciones y generar alertas cuando se supera un umbral establecido.

Los objetivos específicos comprendieron:

- Determinar el voltaje de referencia del sensor en agua limpia.
- Caracterizar su respuesta frente a diferentes concentraciones de caolín.
- Obtener y evaluar una ecuación para estimar la turbidez en NTU.
- Verificar la adquisición, transmisión y almacenamiento de datos en ThingSpeak.
- Evaluar el funcionamiento de las alertas y las notificaciones mediante Telegram.

### Metodología utilizada

Las pruebas se realizaron bajo condiciones controladas, utilizando agua embotellada a temperatura ambiente y distintas concentraciones de caolín para simular variaciones en la cantidad de partículas suspendidas.

Inicialmente, se determinó el voltaje de referencia del sensor en agua limpia, obteniendo **V₀ = (3,295 ± 0,076) V**, a partir de 36 registros considerados en el análisis.

Posteriormente, se prepararon cinco concentraciones de caolín: **105, 185, 265, 345 y 425 mg/L**, realizando tres intentos de aproximadamente tres minutos por concentración.

Los voltajes registrados se relacionaron con valores bibliográficos de turbidez para obtener una ecuación de estimación en NTU. Finalmente, se realizaron cinco ciclos experimentales para evaluar el funcionamiento del sistema de alertas, utilizando un umbral de **133,4 NTU**.

Las mediciones se transmitieron a ThingSpeak mediante Wi-Fi, con intervalos aproximados de 20 segundos.

## 2. Validación de impacto ODS

### Relación con el problema ambiental

El proyecto se vincula con el **ODS 14: Vida Submarina**, específicamente con la meta 14.1, orientada a prevenir y reducir la contaminación marina.

En la fase de agua dulce de la salmonicultura, los residuos de alimento y las fecas pueden contribuir al aumento de partículas suspendidas en el agua. Estas alteraciones pueden afectar su transparencia y las condiciones de los ecosistemas acuáticos.

Frente a esta problemática, el prototipo propone un sistema de monitoreo remoto capaz de registrar variaciones de turbidez y advertir oportunamente sobre condiciones que requieren revisión.

### Métricas evaluadas

| Indicador | Resultado experimental |
|---|---|
| Voltaje de referencia en agua limpia | 3,295 ± 0,076 V |
| Concentraciones de caolín evaluadas | 5 concentraciones, entre 105 y 425 mg/L |
| Repeticiones por concentración | 3 intentos |
| Ajuste lineal de estimación | R² ≈ 0,905 |
| Intervalo de transmisión | Aproximadamente 20 segundos |
| Umbral experimental de alerta | 133,4 NTU estimados |
| Ciclos de evaluación de alertas | 5 ciclos |
| Tiempo observado de notificación | Aproximadamente 10 a 13 segundos |

### Comparación con la situación inicial

El problema identificado corresponde a la dificultad de detectar oportunamente cambios de turbidez mediante observaciones o muestreos puntuales, especialmente cuando las alteraciones ocurren entre períodos de supervisión.

El prototipo permite registrar mediciones periódicas, conservar un historial en ThingSpeak y generar notificaciones mediante Telegram. Esto representa una alternativa tecnológica para complementar los procedimientos de monitoreo existentes.

Durante las pruebas se comprobó que el sistema responde a variaciones en las partículas suspendidas y comunica la superación del umbral configurado. Sin embargo, esta validación se realizó en condiciones de laboratorio y no demuestra todavía una reducción efectiva de la contaminación ambiental.

### Proyección de escalabilidad

Como siguiente etapa, se propone evaluar el prototipo en condiciones reales, considerando mediciones aguas arriba y aguas abajo de posibles puntos de descarga.

Para ello, sería necesario calibrar el sensor con un turbidímetro de referencia, determinar los niveles habituales de turbidez del lugar y establecer umbrales de alerta apropiados.

A futuro, el sistema podría ampliarse mediante la instalación de varios puntos de monitoreo conectados a una plataforma centralizada, permitiendo analizar variaciones temporales y espaciales de la turbidez.

## 3. Conclusiones

Las pruebas experimentales permitieron comprobar que el prototipo cumple con las funciones de adquisición, transmisión, almacenamiento y visualización de datos, además de generar notificaciones automáticas cuando la turbidez estimada supera el umbral establecido.

El sensor presentó una respuesta general frente al aumento de partículas suspendidas. No obstante, las diferencias respecto de los valores bibliográficos y las fluctuaciones cercanas al umbral evidenciaron limitaciones en la confiabilidad de las estimaciones.

Por lo tanto, el prototipo resulta más adecuado, en su estado actual, como un **sistema experimental de alerta temprana** que como un instrumento de medición exacta de turbidez.

### Limitaciones identificadas y propuestas de mejora

| Aspecto | Limitación identificada | Propuesta de mejora |
|---|---|---|
| Temperatura | No se registró la temperatura exacta del agua durante los ensayos. | Incorporar un sensor de temperatura y evaluar una compensación térmica. |
| Luz ambiente | La iluminación externa puede interferir en la recepción óptica del sensor. | Evaluar el aislamiento lumínico de la sonda. |
| Calibración | No se utilizó un turbidímetro de referencia para validar los NTU estimados. | Calibrar y contrastar las lecturas con un instrumento de referencia. |
| Preparación de muestras | La mezcla y sedimentación del caolín pueden generar variaciones entre intentos. | Estandarizar la agitación y los tiempos de medición. |
| Divisor de voltaje | Las tolerancias de las resistencias pueden introducir errores en el voltaje calculado. | Verificar los valores reales y calibrar el circuito completo. |
| Alcance de medición | La precisión de los NTU estimados no está validada en todo el rango del sensor. | Ampliar las pruebas y evaluar la respuesta en distintos niveles de turbidez. |
| Sistema de alertas | Las fluctuaciones cercanas al umbral pueden provocar cambios sucesivos entre los estados 0 y 1. | Incorporar confirmación mediante lecturas consecutivas y evaluar umbrales diferenciados de activación y desactivación. |

La implementación de estas mejoras permitiría aumentar la confiabilidad del prototipo y avanzar hacia su evaluación en condiciones ambientales reales.

## 4. Anexos

### Evidencia fotográfica

**`prueba_validacion_01.jpeg`**

Montaje experimental del prototipo IoT durante las pruebas con muestras de agua y distintas concentraciones de caolín. Se observan el sensor G-008, el ESP8266, la alimentación externa y el dashboard de ThingSpeak utilizado para visualizar las mediciones.

**`prueba_validacion_02.jpeg`**

Detalle de la sonda G-008 sumergida en una muestra de agua con caolín, conectada al circuito electrónico durante la evaluación experimental.

### Documentación complementaria

- **Registros CSV:** mediciones originales almacenadas en ThingSpeak y exportadas para su análisis.
- **Resultados consolidados:** gráficos de caracterización, estimación de turbidez, comparación con referencias bibliográficas y evaluación de alertas.
- **Informe Avance #3:** metodología experimental completa, tablas de resultados, análisis cuantitativo y conclusiones.

## 5. Fuentes y referencias

Las siguientes referencias corresponden a la bibliografía utilizada en el informe del Avance #3:

1. Bolívar-Cuartas, S. M., Castaño-Muñoz, D. L., & Gutiérrez-Flórez, O. D. (2021). *Modelo correlacional de sólidos suspendidos totales presentes en aguas residuales domésticas mediante análisis de turbiedad*. Producción + Limpia, 16(1), 186–197. https://doi.org/10.22507/pml.v16n1a10

2. Bravo, S. (2014). *Guía de pesca recreativa para el río Palena*. Universidad Austral de Chile. https://municipalidadpalena.cl/files/guia_pesca_9q568u75.pdf

3. ECOING Ltda. (2009). *Guía de aplicación de lodos de piscicultura en suelos*. Servicio Agrícola y Ganadero. https://www.sag.gob.cl/sites/default/files/Guia%20Piscicultura_2009.pdf

4. MechatronicStore. (s. f.). *Kit sensor detección de turbidez del agua 3.3-5V*. https://www.mechatronicstore.cl/kit-sensor-deteccion-de-turbidez-del-agua-3-3-5v/

5. Straub, M. G. (2020). *Sensor de turbidez – Projeto de leitura da qualidade da água*. Blog UsinaInfo. https://www.usinainfo.com.br/blog/sensor-de-turbidez-projeto-de-leitura-da-qualidade-da-agua/

6. Superintendencia del Medio Ambiente. (s. f.). *Sistema Nacional de Información de Fiscalización Ambiental (SNIFA)*. https://snifa.sma.gob.cl/

7. U.S. Geological Survey. (2026). *Turbidity and water*. https://www.usgs.gov/water-science-school/science/turbidity-and-water

