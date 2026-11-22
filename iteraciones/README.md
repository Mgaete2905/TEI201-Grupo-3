# Historial de Iteraciones

## Propósito

Esta carpeta documenta la evolución del proyecto de monitoreo de calidad del agua en la salmonicultura, desarrollado en la asignatura TEI201 – Taller de Diseño en Ingeniería.

Su objetivo es evidenciar el proceso iterativo de diseño, desde la identificación de la problemática ambiental y la conceptualización de una solución hasta la construcción, integración y validación experimental de un prototipo IoT funcional.

El proyecto se relaciona con el **ODS 14: Vida Submarina**, especialmente con la meta 14.1, mediante una propuesta de monitoreo independiente y alerta temprana frente a alteraciones de la calidad del agua.

---

## Estructura de carpetas

```text
iteraciones/
├── iteracion_1/
│   └── README.md
├── iteracion_2/
    └── README.md

```

Cada carpeta reúne la documentación correspondiente a una etapa del proyecto, incluyendo presentaciones, informes, fotografías, esquemas, código y resultados, según los materiales efectivamente desarrollados.

## Tabla comparativa de iteraciones

| Aspecto | Iteración 1 | Iteración 2 | Iteración 3 |
|---|---|---|---|
| Etapa | Conceptualización | Prototipo alpha | Prototipo IoT y validación |
| Entrega | Avance #1 | Avance #2 | Avance #3 |
| Objetivo | Definir el problema y proponer una solución | Comprobar la arquitectura básica de medición y alerta | Integrar monitoreo remoto y evaluar experimentalmente el sistema |
| Sensores | pH y turbidez propuestos | TDS V1.0 | Turbidez G-008 |
| Microcontrolador | No implementado | Arduino Uno | ESP8266 NodeMCU |
| Alertas | Propuesta de alerta temprana | LED y zumbador | Estado de alerta y notificaciones Telegram |
| Comunicación | Propuesta de monitoreo independiente | USB y monitor serial | Wi-Fi |
| Almacenamiento | No implementado | Visualización serial | ThingSpeak |
| Alimentación | No definida | USB desde computador | Power bank |
| Encapsulado | Nodo sumergible conceptual | Diseño 3D conceptual | Montaje experimental en protoboard |
| Validación | Investigación y análisis del problema | Pruebas de respuesta del sensor TDS | Caracterización, estimación de NTU y pruebas de alertas |

---

## Evolución del diseño

### Iteración 1 – Conceptualización de la solución

**Estado:** Propuesta conceptual.

Se identificó como problemática el deterioro de los ecosistemas acuáticos asociado a los residuos de la salmonicultura, junto con la falta de monitoreo continuo e independiente.

Como solución inicial, se propuso desarrollar un nodo de monitoreo ambiental capaz de medir pH y turbidez, generar registros propios y proporcionar alertas tempranas.

**Resultados principales:**
- Identificación de la problemática y sus actores involucrados.
- Análisis de las brechas de monitoreo ambiental.
- Definición de una solución tecnológica basada en sensores.
- Vinculación con el ODS 14 y sus metas ambientales.

**Limitación:** La propuesta todavía no contaba con una implementación física que permitiera comprobar su funcionamiento.

### Iteración 2 – Prototipo alpha funcional

**Estado:** Prueba de concepto implementada.

Se construyó un primer prototipo utilizando un Arduino Uno, un sensor TDS V1.0 y un sistema de alerta compuesto por un LED y un zumbador.

Aunque inicialmente se habían considerado sensores de pH y turbidez, se utilizó un sensor TDS por disponibilidad, con el propósito de validar primero la arquitectura de adquisición, procesamiento y alerta.

**Resultados principales:**
- Lectura analógica de la señal del sensor.
- Conversión de las mediciones a valores estimados de TDS en ppm.
- Configuración de un umbral modificable desde el monitor serial.
- Activación del LED y zumbador al superar el umbral.
- Pruebas con agua de la llave y adición de sal.
- Desarrollo de un diseño conceptual de encapsulado.

**Limitaciones identificadas:**
- Dependencia del computador para alimentación y comunicación.
- Ausencia de transmisión inalámbrica y almacenamiento remoto.
- El TDS no mide directamente las partículas suspendidas.
- Necesidad de avanzar hacia el sensor asociado a la problemática original.

### Iteración 3 – Prototipo IoT funcional y validación

**Estado:** Prototipo integrado y evaluado experimentalmente.

Se reemplazó la arquitectura inicial por un ESP8266 NodeMCU y un sensor de turbidez G-008, incorporando conectividad Wi-Fi, almacenamiento en ThingSpeak y notificaciones mediante Telegram.

Esta etapa permitió evaluar tanto la respuesta del sensor frente a distintas concentraciones de caolín como el funcionamiento de la cadena completa de monitoreo y alerta.

**Resultados principales:**
- Determinación del voltaje de referencia en agua limpia.
- Caracterización del sensor mediante cinco concentraciones de caolín.
- Obtención de una ecuación para estimar turbidez en NTU.
- Transmisión periódica de mediciones a ThingSpeak.
- Evaluación de cinco ciclos experimentales de alerta.
- Verificación de notificaciones mediante Telegram.

**Limitaciones pendientes:**
- Ausencia de calibración directa con turbidímetro.
- Variaciones experimentales asociadas a las muestras de caolín.
- Fluctuaciones en la activación de alertas cerca del umbral.
- Falta de validación en condiciones ambientales reales.

---

## Justificación de los cambios

| Transición | Cambio implementado | Justificación | Resultado |
|---|---|---|---|
| Iteración 1 → 2 | Construcción de un prototipo con Arduino y sensor TDS | Comprobar el funcionamiento básico del sistema con componentes disponibles | Se verificó la lectura del sensor y la activación de alertas locales |
| Iteración 2 → 3 | Sustitución del sensor TDS por el G-008 | Evaluar una variable más directamente relacionada con las partículas suspendidas | Se caracterizó la respuesta del sensor frente a concentraciones de caolín |
| Iteración 2 → 3 | Sustitución de Arduino Uno por ESP8266 | Incorporar conectividad Wi-Fi | Se habilitó el envío inalámbrico de mediciones |
| Iteración 2 → 3 | Incorporación de ThingSpeak | Registrar y visualizar las mediciones de forma remota | Se obtuvo un historial de datos y gráficos |
| Iteración 2 → 3 | Incorporación de notificaciones Telegram | Comunicar automáticamente la superación del umbral | Se verificó la recepción de alertas durante las pruebas |
| Iteración 2 → 3 | Desarrollo de un protocolo de caracterización | Evaluar cuantitativamente el comportamiento del prototipo | Se obtuvieron promedios, desviaciones estándar y comparaciones bibliográficas |

---

## Métricas de evolución

| Métrica | Iteración 1 | Iteración 2 | Iteración 3 |
|---|---|---|---|
| Intervalo de lectura o registro | No implementado | Aproximadamente 1 segundo por lectura | Aproximadamente 20 segundos entre registros enviados |
| Variable evaluada | pH y turbidez propuestos | TDS estimados (ppm) | Voltaje y turbidez estimada (NTU) |
| Alerta | Conceptual | Local, mediante LED y zumbador | Remota, mediante Telegram |
| Registro histórico remoto | No | No | Sí |
| Pruebas documentadas | Análisis de la problemática | Agua de la llave y solución salina | Agua limpia, cinco concentraciones de caolín y cinco ciclos de alertas |
| Tiempo de notificación remota | No aplica | No aplica | Aproximadamente 10–13 segundos |

Los indicadores representan funcionalidades y condiciones de evaluación de cada etapa. No constituyen porcentajes de mejora directamente comparables, ya que las variables medidas y las arquitecturas fueron diferentes.

---

## Lecciones aprendidas

### Técnicas

- La selección de sensores debe responder tanto a la problemática ambiental como a la disponibilidad de componentes.
- Verificar una arquitectura básica antes de incorporar conectividad facilita la integración progresiva.
- La conversión de señales eléctricas a unidades físicas requiere calibración y validación experimental.
- La estabilidad de las lecturas es importante para evitar activaciones sucesivas de alertas.

### Del proceso de diseño

- El desarrollo iterativo permitió modificar decisiones iniciales a partir de las limitaciones observadas.
- La documentación de las pruebas facilita identificar errores y fundamentar mejoras.
- La validación funcional de un prototipo no equivale a demostrar su precisión ni su impacto ambiental real.

### Proyección

La siguiente etapa de desarrollo debería concentrarse en calibración con instrumentos de referencia, protección del montaje, reducción de falsas alertas y evaluación en terreno.

---

## Documentación de referencia

- **Avance #1:** Presentación e informe de la problemática ambiental y propuesta de solución.
- **Avance #2:** Presentación del prototipo alpha funcional y código Arduino correspondiente.
- **Avance #3:** Informe de integración IoT, caracterización experimental y validación del sistema.

Cada iteración conserva sus propios antecedentes para permitir la trazabilidad de las decisiones y modificaciones realizadas durante el proyecto.
