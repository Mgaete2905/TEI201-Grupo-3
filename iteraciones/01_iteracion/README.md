# Iteración 1 – Conceptualización de la Solución

## Información General

**Versión:** v1.0  
**Estado:** Propuesta conceptual – Diseño inicial  
**Avance asociado:** Avance #1 – Presentación de la Problemática  
**Asignatura:** TEI201 – Taller de Diseño en Ingeniería  
**ODS asociado:** ODS 14 – Vida Submarina

---

## Descripción

La primera iteración se centró en identificar y analizar la problemática ambiental asociada a la salmonicultura intensiva en el sur de Chile, particularmente la acumulación de residuos orgánicos y químicos que contribuyen al deterioro del ecosistema bentónico y a la generación de condiciones hipóxicas o anaeróbicas.

A partir de la investigación realizada, se identificó como brecha principal la falta de monitoreo ambiental continuo, independiente y de acceso público, debido a la dependencia de evaluaciones puntuales que dificultan la detección temprana de alteraciones.

Como respuesta, se propuso desarrollar un nodo de monitoreo ambiental de bajo costo, capaz de medir simultáneamente pH y turbidez, generar registros independientes y proporcionar alertas tempranas.

### Objetivos de esta iteración

- Identificar la problemática ambiental y su relación con el ODS 14.
- Caracterizar a los actores afectados, especialmente pescadores artesanales y comunidades costeras.
- Analizar las limitaciones de los mecanismos actuales de monitoreo ambiental.
- Definir una propuesta tecnológica que permita obtener información continua e independiente.
- Establecer las características iniciales del sistema de monitoreo.

---

## Concepto de Solución

### Hardware propuesto

En esta etapa no se construyó un circuito físico, pero se definieron los componentes generales de la solución.

| Componente | Función propuesta |
|---|---|
| Sensor de turbidez | Detectar variaciones en las partículas suspendidas en el agua. |
| Sensor de pH | Registrar cambios en la acidez o alcalinidad del agua. |
| Microcontrolador | Procesar las señales obtenidas desde los sensores. |
| Sistema de comunicación | Permitir la transmisión de mediciones para su consulta. |
| Nodo sumergible | Proteger los componentes y permitir el monitoreo in situ. |

### Software propuesto

Se planteó un sistema capaz de adquirir y procesar las mediciones, mantener registros históricos y generar alertas ante variaciones relevantes de los parámetros monitoreados.

En esta iteración no se desarrolló código ni se seleccionó una plataforma definitiva de almacenamiento o visualización.

---

## Resultados de la Primera Iteración

### Avances logrados

- **Identificación de la problemática:** se analizó el deterioro ambiental relacionado con la acumulación de residuos provenientes de la salmonicultura.
- **Análisis de actores:** se identificó a pescadores artesanales y comunidades costeras como beneficiarios potenciales de la solución.
- **Detección de brechas:** se estableció la necesidad de contar con mediciones continuas e independientes.
- **Conceptualización tecnológica:** se propuso un nodo de monitoreo basado en sensores de pH y turbidez.
- **Vinculación con el ODS 14:** se relacionó la solución con la prevención de la contaminación marina y la protección de los ecosistemas acuáticos.

### Limitaciones identificadas

| Limitación | Descripción | Mejora propuesta |
|---|---|---|
| Ausencia de prototipo físico | La solución se encontraba únicamente en etapa conceptual. | Construir un prototipo alpha para verificar la factibilidad técnica. |
| Sensores no evaluados | No existían mediciones experimentales que permitieran comprobar su respuesta. | Implementar un sensor disponible y realizar pruebas controladas. |
| Arquitectura sin validar | No se había comprobado la integración entre medición, procesamiento y alerta. | Desarrollar un circuito básico con microcontrolador y sistema de alerta. |
| Falta de resultados experimentales | La propuesta no contaba con datos propios de funcionamiento. | Registrar mediciones y documentar las primeras pruebas. |

---

## Aprendizajes

### Técnicos

- La selección de variables ambientales debe estar relacionada con el fenómeno que se busca monitorear.
- Un sistema de monitoreo requiere integrar adquisición de datos, procesamiento y mecanismos de alerta.
- La factibilidad de una solución tecnológica debe comprobarse mediante pruebas experimentales.

### De Diseño

- La identificación de las necesidades de los usuarios permite orientar las características de la solución.
- El monitoreo independiente constituye un requisito importante para abordar la brecha de información identificada.
- El desarrollo del prototipo debe realizarse progresivamente, comenzando por validar sus funciones esenciales.

---

## Plan para la Iteración 2

A partir de la propuesta conceptual, se estableció como siguiente etapa la construcción de un prototipo alpha que permitiera verificar la arquitectura básica del sistema.

### Hardware

- [x] Seleccionar un microcontrolador para procesar las mediciones.
- [x] Implementar un sensor disponible para realizar las primeras pruebas.
- [x] Incorporar un mecanismo de alerta local.
- [x] Construir un circuito experimental en protoboard.

### Software

- [x] Desarrollar un programa para adquirir y procesar lecturas.
- [x] Incorporar un umbral de activación de alertas.
- [x] Permitir la visualización de los resultados mediante comunicación serial.

### Diseño

- [x] Desarrollar una propuesta conceptual de encapsulado.
- [x] Documentar las conexiones y componentes utilizados.
- [x] Realizar pruebas iniciales de funcionamiento.

Las actividades anteriores fueron abordadas durante la segunda iteración, utilizando Arduino Uno, un sensor TDS y un sistema de alerta mediante LED y zumbador.

---

## Archivos de esta Iteración

Esta carpeta contiene la documentación correspondiente a la etapa de conceptualización:

- **Presentación del Avance #1:** exposición de la problemática, los actores involucrados y la solución propuesta.
- **Informe del Avance #1:** investigación, análisis de brechas, caracterización de usuarios y conceptualización del sistema.

No se incluyen archivos de código, esquemas de conexiones ni fotografías de un montaje físico, debido a que estos elementos se desarrollaron en etapas posteriores.

---

## Conclusión

La primera iteración permitió establecer las bases conceptuales del proyecto, identificando una problemática ambiental concreta y proponiendo una solución tecnológica orientada al monitoreo continuo e independiente de la calidad del agua.

Aunque todavía no se contaba con un prototipo físico, esta etapa permitió definir los objetivos, las variables de interés y las características generales del sistema, proporcionando los fundamentos para desarrollar y evaluar el prototipo alpha en la siguiente iteración.
