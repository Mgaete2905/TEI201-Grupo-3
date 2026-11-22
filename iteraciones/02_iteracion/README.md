# Iteración 2 – Prototipo Alpha Funcional

## Información General

**Versión:** v2.0  
**Estado:** Prototipo alpha – Prueba de concepto funcional  
**Avance asociado:** Avance #2 – Prototipo Alpha IoT Funcional  
**Asignatura:** TEI201 – Taller de Diseño en Ingeniería  
**ODS asociado:** ODS 14 – Vida Submarina, meta 14.1

---

## Descripción

La segunda iteración correspondió a la construcción y evaluación del primer prototipo físico, desarrollado para comprobar la factibilidad técnica de la solución conceptual planteada en el Avance #1.

Se implementó un sistema basado en Arduino Uno, un sensor TDS V1.0 y un mecanismo de alerta local mediante LED y zumbador, capaz de adquirir mediciones, procesarlas y activar una advertencia cuando se supera un umbral configurable.

Aunque inicialmente se habían considerado sensores de pH y turbidez, se utilizó un sensor TDS por disponibilidad, con el objetivo de validar la arquitectura básica del sistema antes de incorporar los componentes definitivos.

### Objetivos de esta iteración

- Construir un prototipo funcional para adquirir y procesar mediciones de calidad del agua.
- Implementar un sistema de alerta local mediante LED y zumbador.
- Configurar un umbral de alerta modificable durante el funcionamiento.
- Evaluar experimentalmente la respuesta del sensor ante cambios en los sólidos disueltos.
- Desarrollar un modelo 3D y sus respectivos planos técnicos para el encapsulado.

---

## Cambios Respecto a la Iteración 1

### Hardware

En la primera iteración únicamente se había definido una solución conceptual. Durante esta etapa se incorporaron los siguientes componentes:

| Componente | Función |
|---|---|
| Arduino Uno (ATmega328) | Adquirir y procesar las señales del sensor. |
| Sensor TDS V1.0 | Estimar la concentración de sólidos disueltos en ppm. |
| Mini zumbador de 12 mm – 2 kHz | Generar una advertencia acústica al superar el umbral. |
| LED integrado (pin 13) | Proporcionar una señal visual de alerta. |
| Protoboard de 400 puntos | Facilitar las conexiones experimentales. |
| Cables Dupont | Conectar los componentes electrónicos. |
| Computador mediante USB | Proporcionar alimentación y visualizar las mediciones. |

**Cambio principal:** la propuesta inicial de medir pH y turbidez se reemplazó temporalmente por la medición de TDS, para comprobar primero la cadena de adquisición, procesamiento y alerta.

### Software

Se desarrolló un programa en Arduino IDE, utilizando C/C++ y sin librerías externas.

**Funcionalidades implementadas:**

- Lectura analógica del sensor TDS mediante el pin A1.
- Conversión de la señal a voltaje y estimación de TDS mediante una ecuación polinómica.
- Compensación de temperatura con un valor fijo de 25 °C.
- Visualización de las mediciones en el monitor serial.
- Comparación de los valores obtenidos con un umbral configurable.
- Activación del LED y zumbador al superar el límite.
- Modificación del umbral y del factor de calibración mediante comandos seriales.

El sistema realizaba aproximadamente **una lectura por segundo**, utilizando comunicación serial a 9600 baudios.

### Diseño mecánico

Se desarrolló un modelo 3D del encapsulado mediante **Autodesk Fusion 360**, acompañado de sus respectivos planos técnicos.

El diseño consideró la distribución de los componentes electrónicos, la protección frente a la humedad y la accesibilidad para mantenimiento.

Los archivos de Fusion 360 y los planos se incluyen en la documentación de esta iteración. No se documenta la fabricación física del encapsulado durante esta etapa.

---

## Resultados de Testing Inicial

### Metodología

Se realizaron pruebas experimentales para evaluar la respuesta del sensor TDS ante dos condiciones de agua:

1. **Agua de la llave:** utilizada para establecer una línea base de referencia.
2. **Agua con sal:** preparación de una solución con 6 gramos de sal por litro de agua, para provocar un aumento de los sólidos disueltos.

Las mediciones se observaron mediante el monitor serial de Arduino, registrando la respuesta del sensor y el comportamiento del sistema de alertas.

### Resultados cuantitativos

| Condición experimental | Resultado observado |
|---|---|
| Agua de la llave | Aproximadamente 800 ppm |
| Agua con 6 g de sal por litro | Superior a 2.000 ppm |
| Frecuencia de lectura | Aproximadamente 1 lectura por segundo |
| Rango nominal del sensor | 0–1.000 ppm |
| Activación de alerta | Al superar el umbral configurado |

Los resultados evidenciaron que el sensor respondía rápidamente al aumento de sólidos disueltos y que el sistema era capaz de activar el zumbador y el LED al superar el umbral.

Sin embargo, la solución salina produjo lecturas superiores al rango nominal del sensor, lo que limitó la interpretación cuantitativa de estos valores.

### Funcionalidades verificadas

- Lectura y procesamiento de la señal del sensor TDS.
- Visualización de resultados mediante comunicación serial.
- Configuración del umbral de alerta durante el funcionamiento.
- Activación de señales visuales y acústicas.
- Detección de cambios entre las condiciones experimentales.

---

## Problemas Identificados y Mejoras Propuestas

| Problema | Observación | Mejora propuesta |
|---|---|---|
| Línea base elevada | El agua de la llave registró aproximadamente 800 ppm, provocando inicialmente la activación de la alerta. | Configurar el umbral considerando la línea base y un margen adicional. |
| Ruido de la señal | Se observaron fluctuaciones en las mediciones. | Incorporar filtrado o promediado de lecturas para reducir falsas alertas. |
| Rango limitado del sensor | La solución salina produjo lecturas superiores a 2.000 ppm, excediendo el rango nominal de 1.000 ppm. | Seleccionar un sensor más adecuado para la variable ambiental de interés. |
| Variable indirecta | El TDS mide sólidos disueltos, pero no permite medir directamente partículas suspendidas. | Incorporar un sensor de turbidez. |
| Dependencia del computador | El sistema requería conexión USB para alimentación y visualización. | Incorporar alimentación externa y comunicación inalámbrica. |
| Ausencia de almacenamiento remoto | Los datos se visualizaban mediante el monitor serial. | Implementar una plataforma para registrar y consultar mediciones históricas. |
| Encapsulado conceptual | Se contaba con un modelo 3D y planos técnicos, pero no con una carcasa fabricada. | Continuar el desarrollo del encapsulado y evaluar su protección frente a la humedad. |

---

## Comparación entre Iteraciones 1 y 2

| Aspecto | Iteración 1 | Iteración 2 |
|---|---|---|
| Estado | Propuesta conceptual | Prototipo alpha funcional |
| Variables consideradas | pH y turbidez | TDS |
| Microcontrolador | No implementado | Arduino Uno |
| Sensor físico | No implementado | TDS V1.0 |
| Sistema de alertas | Propuesto conceptualmente | LED y zumbador |
| Comunicación | Propuesta de monitoreo independiente | USB y monitor serial |
| Registro de mediciones | No implementado | Visualización serial |
| Testing | Investigación de la problemática | Pruebas con agua de la llave y solución salina |
| Diseño y encapsulado | Propuesta conceptual del nodo | Modelo 3D desarrollado en Fusion 360 y planos técnicos |

La principal mejora consistió en pasar de una propuesta conceptual a un sistema físico capaz de adquirir mediciones, procesarlas y generar alertas, acompañado de un desarrollo de diseño mecánico documentado.

---

## Aprendizajes

### Técnicos

- La línea base del sensor debe determinarse experimentalmente antes de establecer umbrales.
- El ruido de las mediciones puede provocar alertas innecesarias.
- La selección del sensor debe considerar tanto su rango de funcionamiento como la variable ambiental que se busca evaluar.
- La adquisición y procesamiento de datos pueden validarse antes de incorporar conectividad inalámbrica.

### De Diseño

- La construcción de un prototipo alpha permite identificar limitaciones que no son evidentes durante la conceptualización.
- El modelado 3D y los planos técnicos permiten anticipar la distribución de componentes, la protección y el mantenimiento del sistema.
- La integración progresiva de componentes facilita la identificación y corrección de problemas.

---

## Plan para la Iteración 3

A partir de los resultados del prototipo alpha, se definió la necesidad de avanzar hacia un sistema IoT capaz de monitorear turbidez y transmitir mediciones de forma remota.

### Hardware

- [x] Sustituir el sensor TDS por un sensor de turbidez.
- [x] Incorporar un microcontrolador con conectividad Wi-Fi.
- [x] Implementar alimentación mediante batería externa.
- [x] Adaptar las conexiones del circuito a los nuevos componentes.

### Software

- [x] Desarrollar la adquisición y procesamiento de lecturas del sensor de turbidez.
- [x] Incorporar transmisión inalámbrica.
- [x] Implementar almacenamiento y visualización en ThingSpeak.
- [x] Incorporar alertas remotas mediante Telegram.

### Testing

- [x] Determinar el voltaje de referencia en agua limpia.
- [x] Caracterizar la respuesta del sensor frente a distintas concentraciones de caolín.
- [x] Obtener una ecuación preliminar para estimar NTU.
- [x] Evaluar experimentalmente el funcionamiento del sistema de alertas.

Estas actividades corresponden a los desarrollos abordados posteriormente en el Avance #3.

---

## Archivos de esta Iteración

La carpeta contiene los archivos correspondientes al desarrollo y validación del prototipo alpha:

- **Presentación Avance #2:** descripción del prototipo, componentes, funcionamiento y resultados experimentales.
- **Código Arduino:** programa utilizado para adquirir las mediciones del sensor TDS y activar las alertas.
- **Archivos Fusion 360:** modelo 3D del encapsulado desarrollado durante esta iteración.
- **Planos técnicos:** documentación gráfica del diseño mecánico.
- **Evidencias fotográficas:** registros del montaje y las pruebas experimentales, según los archivos disponibles.

---

## Conclusión

La segunda iteración permitió comprobar la factibilidad técnica de la arquitectura básica del sistema mediante un prototipo alpha funcional, capaz de adquirir mediciones de TDS y generar alertas locales.

Las pruebas demostraron la respuesta del sensor ante cambios en los sólidos disueltos, pero también evidenciaron limitaciones relacionadas con su rango de medición, la estabilidad de la señal y la dependencia de una conexión USB.

Adicionalmente, se desarrolló un modelo 3D del encapsulado y sus respectivos planos técnicos, incorporando consideraciones de protección, distribución de componentes y mantenimiento.

Estos resultados fundamentaron la transición hacia un sistema IoT basado en un sensor de turbidez, conectividad inalámbrica y almacenamiento remoto, desarrollado durante la tercera iteración.
