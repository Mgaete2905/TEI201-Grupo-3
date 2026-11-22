# Testing y Validación

## Objetivo

Evaluar experimentalmente el funcionamiento del prototipo IoT de monitoreo de turbidez, verificando su capacidad para detectar variaciones en la cantidad de partículas suspendidas, registrar mediciones en ThingSpeak y generar alertas mediante Telegram.

Las pruebas buscan establecer su utilidad potencial como sistema de alerta temprana frente a alteraciones de la calidad del agua, en relación con el ODS 14: Vida Submarina.

---

## 📁 Carpetas

### `reportes/`
Documentos con los procedimientos, resultados experimentales, análisis y conclusiones del testing.

### `evidencias/`
Fotografías del montaje, pruebas con muestras de agua y registros visuales del funcionamiento del sistema.

### `datos/`
Registros CSV obtenidos desde ThingSpeak, resultados consolidados y datos utilizados para elaborar gráficos y comparaciones.

---

## Metodología de Testing

Las pruebas se realizaron en condiciones controladas, utilizando el sensor de turbidez G-008 conectado a un ESP8266, con almacenamiento remoto de las mediciones en ThingSpeak.

Se utilizaron muestras de agua limpia y soluciones de caolín para evaluar la respuesta del sensor ante diferentes concentraciones de partículas suspendidas.

### Protocolo experimental

| Etapa | Procedimiento | Duración por medición | Repeticiones |
|---|---|---|---|
| 1. Agua limpia | Determinación del voltaje de referencia V₀. | 15 minutos: 5 de estabilización y 10 de análisis. | Una prueba documentada, con 36 registros analizados. |
| 2. Caracterización del sensor | Medición del voltaje con caolín a 105, 185, 265, 345 y 425 mg/L. | Aproximadamente 3 minutos por intento. | 3 intentos por concentración; 15 intentos en total. |
| 3. Evaluación de NTU estimados | Comparación de las estimaciones del prototipo con referencias bibliográficas. | Aproximadamente 3 minutos por intento. | 3 intentos por concentración; 15 intentos en total. |
| 4. Evaluación de alertas | Pruebas con agua limpia y caolín de 185 y 345 mg/L, verificando los estados de alerta y las notificaciones. | Duración por ciclo no especificada en el informe. | 5 ciclos experimentales. |

Las mediciones se transmitieron aproximadamente cada **20 segundos**. Para el análisis de las concentraciones se calcularon los promedios de los registros de cada intento y, posteriormente, los promedios generales y las desviaciones estándar.

---

## Métricas de Evaluación

### Indicadores relacionados con el ODS

- **Detección de variaciones:** capacidad del sensor para responder a cambios en la concentración de partículas suspendidas.
- **Continuidad del registro:** almacenamiento periódico de mediciones e historial accesible mediante ThingSpeak.
- **Alerta temprana:** identificación de superaciones del umbral y envío de notificaciones mediante Telegram.
- **Concordancia con referencias:** comparación de los NTU estimados con valores bibliográficos para identificar limitaciones de la medición.

---

## Análisis de Resultados

### Evaluación cuantitativa

Los ensayos mostraron una tendencia general de disminución del voltaje y aumento de la turbidez estimada al incrementar la concentración de caolín.

| Caolín (mg/L) | NTU bibliográficos | NTU estimados ± desviación estándar | Diferencia relativa |
|---|---|---|---|
| 105 | 48,71 | 73,86 ± 16,60 | 51,64 % |
| 185 | 99,97 | 95,71 ± 5,88 | 4,26 % |
| 265 | 125,90 | 186,94 ± 9,92 | 48,48 % |
| 345 | 185,00 | 149,00 ± 2,89 | 19,46 % |
| 425 | 220,20 | 229,59 ± 19,09 | 4,26 % |

Las concentraciones de 185 y 425 mg/L presentaron las menores diferencias respecto de los valores bibliográficos. Sin embargo, otras muestras registraron discrepancias importantes, lo que evidencia que la ecuación utilizada todavía no permite obtener estimaciones uniformemente confiables.

Debido a la ausencia de un turbidímetro de referencia, estas diferencias representan la concordancia con los valores bibliográficos, no una medición independiente de la exactitud del sensor.

### Evaluación del sistema de alertas

Durante los cinco ciclos experimentales se comprobó que el sistema registró los cambios de estado y envió notificaciones mediante Telegram.

Se observaron tiempos aproximados de **10 a 13 segundos** entre la activación registrada y la recepción del mensaje. No obstante, las fluctuaciones cercanas al umbral provocaron cambios sucesivos entre los estados 0 y 1.

Esto evidencia la necesidad de incorporar mecanismos de confirmación mediante lecturas consecutivas para reducir alertas provocadas por variaciones momentáneas.

---

## Validación de Impacto ODS

**ODS seleccionado:** ODS 14 – Vida Submarina.

**Meta asociada:** Meta 14.1, orientada a prevenir y reducir la contaminación marina.

### Relación con la problemática

En la fase de agua dulce de la salmonicultura, los residuos de alimento y las fecas pueden contribuir al aumento de partículas suspendidas y alterar la transparencia del agua.

El prototipo busca aportar una herramienta de monitoreo remoto que permita identificar estas variaciones y generar información útil para orientar una revisión oportuna de posibles episodios de alteración ambiental.

### Indicadores de impacto

| Indicador | Situación inicial | Resultado alcanzado |
|---|---|---|
| Detección de cambios de turbidez | El muestreo puntual puede omitir episodios entre observaciones. | El prototipo detectó variaciones de la señal en muestras controladas de caolín. |
| Disponibilidad de información | Las observaciones aisladas no permiten reconstruir continuamente la evolución de un episodio. | Se implementó almacenamiento histórico en ThingSpeak con registros aproximadamente cada 20 segundos. |
| Comunicación de alertas | La identificación de un episodio depende de la revisión de las mediciones. | Se verificaron notificaciones automáticas mediante Telegram, con tiempos observados de 10 a 13 segundos. |
| Confiabilidad de las estimaciones | No existía una calibración experimental validada en NTU. | Se obtuvo una ecuación preliminar, aunque con diferencias de 4,26 % a 51,64 % respecto de referencias bibliográficas. |

### Alcance de la validación

Los resultados permiten validar preliminarmente la capacidad técnica del prototipo para detectar cambios, almacenar información y generar alertas.

Sin embargo, las pruebas se realizaron exclusivamente en laboratorio. Por lo tanto, **no se ha demostrado todavía una reducción de la contaminación ni un impacto ambiental cuantificable en ecosistemas acuáticos reales**.

### Proyección de impacto a escala

Como desarrollo futuro, se propone implementar varios puntos de monitoreo en cuerpos de agua cercanos a pisciculturas, incluyendo mediciones aguas arriba y aguas abajo de posibles descargas.

Esta ampliación permitiría comparar tendencias, establecer niveles habituales de turbidez y orientar inspecciones ante variaciones anormales.

Antes de su implementación, será necesario calibrar el sensor con un turbidímetro, evaluar su respuesta en niveles bajos de turbidez y establecer umbrales adecuados para cada lugar.

---

## Conclusiones

El testing permitió comprobar el funcionamiento del sistema IoT en la adquisición, transmisión y almacenamiento de mediciones, así como en la generación de alertas automáticas.

El prototipo mostró capacidad para detectar variaciones en las características de las muestras de agua. Sin embargo, las diferencias respecto de los valores bibliográficos y las fluctuaciones alrededor del umbral evidencian limitaciones que deben abordarse.

En su estado actual, el sistema presenta potencial como herramienta experimental de alerta temprana. Su aplicación ambiental requerirá una calibración directa, mejoras en la estabilidad de las mediciones y pruebas en condiciones reales.

---
