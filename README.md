# TEI201 – Sistema IoT de Monitoreo de la Calidad del Agua

**Universidad Adolfo Ibáñez | Taller de Diseño en Ingeniería | Grupo 3**

## Información del equipo

**Integrantes:**

- Montserrat Gaete
- Felipe Lagos
- Alfonso Rosello
- Alex Sabag

**ODS asociado:** ODS 14 – Vida submarina, meta 14.1: reducir la contaminación marina.

## Problemática

El proyecto aborda la necesidad de contar con herramientas accesibles que permitan monitorear la calidad del agua en actividades relacionadas con la salmonicultura, particularmente durante su etapa de producción en agua dulce.

La disponibilidad limitada de información continua e independiente dificulta la detección oportuna de alteraciones en las condiciones del agua y el seguimiento de posibles impactos ambientales. Frente a esta problemática, se propone desarrollar un sistema de monitoreo que facilite la adquisición, el almacenamiento y la visualización de datos, contribuyendo a identificar variaciones que puedan requerir una evaluación ambiental más detallada.

## Descripción del proyecto

El proyecto consiste en el desarrollo progresivo de un sistema de monitoreo de la calidad del agua, mediante distintas iteraciones de prototipos que incorporan sensores, microcontroladores, herramientas de procesamiento de datos y sistemas de comunicación.

La primera versión, denominada **Prototipo Alpha**, utilizó un Arduino Uno y un sensor TDS para registrar sólidos disueltos en el agua, incorporando alertas locales mediante un LED y un zumbador. Esta etapa permitió explorar el funcionamiento de los sensores y establecer las bases para el desarrollo de una solución de monitoreo.

Posteriormente, el proyecto evolucionó hacia un **prototipo IoT de monitoreo de turbidez**, basado en un microcontrolador ESP8266 NodeMCU y un sensor óptico G-008. Esta versión permite adquirir mediciones, transmitirlas mediante Wi-Fi a la plataforma ThingSpeak, estimar valores de turbidez en unidades nefelométricas (NTU) y generar notificaciones automáticas mediante Telegram cuando se supera un umbral establecido.

El desarrollo comprende etapas de diseño, construcción, programación, integración de componentes, modelado tridimensional, caracterización experimental y evaluación de resultados. A través de estas iteraciones, se busca mejorar progresivamente las capacidades de monitoreo, comunicación y detección de alteraciones en la calidad del agua.

## Estado del proyecto

- **Curso:** TEI201 – Taller de Diseño en Ingeniería.
- **Última actualización:** 23/11/2026.
- **Estado:** Prototipo IoT desarrollado y evaluado experimentalmente.
- **Versión inicial:** Prototipo Alpha.
- **Versión posterior:** Prototipo IoT de monitoreo de turbidez.

## Organización del repositorio

El repositorio reúne los archivos y la documentación técnica correspondientes a las distintas etapas de desarrollo del proyecto.

Cada iteración cuenta con documentación que permite consultar los antecedentes de diseño, componentes utilizados, esquemáticos, código de programación, modelos tridimensionales y resultados experimentales, según corresponda.

Esta organización facilita la trazabilidad del proceso de desarrollo, la comparación entre versiones y la consulta de los procedimientos y resultados obtenidos durante el proyecto.

## Tecnologías utilizadas

Durante el desarrollo del proyecto se utilizaron las siguientes herramientas y tecnologías:

- **Arduino Uno y ESP8266 NodeMCU:** microcontroladores utilizados en las distintas iteraciones.
- **Sensores TDS y G-008:** adquisición de datos relacionados con la calidad del agua.
- **Arduino IDE:** programación y configuración de los microcontroladores.
- **ThingSpeak:** almacenamiento, visualización y consulta de mediciones.
- **Telegram:** recepción de notificaciones automáticas.
- **Autodesk Fusion 360:** diseño mecánico, modelado tridimensional y elaboración de planos técnicos.
- **Bambu Studio:** preparación de archivos para impresión 3D.

## Declaración de uso de inteligencia artificial

Durante el desarrollo del proyecto se utilizaron herramientas de inteligencia artificial como apoyo en distintas actividades técnicas y de documentación.

Su utilización comprendió:

- **Desarrollo del código:** apoyo en la redacción y elaboración del código de programación utilizado para implementar las funciones del prototipo.
- **Implementación de plataformas y herramientas:** orientación e instrucciones paso a paso para la configuración, integración y utilización de servicios complementarios, como ThingSpeak y Telegram.
- **Procesamiento y análisis de datos:** apoyo en la organización, procesamiento y análisis de los registros experimentales obtenidos durante las pruebas del prototipo.
- **Elaboración de gráficos:** asistencia en la generación de representaciones gráficas para visualizar, comparar e interpretar los resultados experimentales.
- **Redacción de información:** apoyo en la elaboración, organización y mejora de textos utilizados en informes técnicos y documentación del proyecto.
- **Búsqueda de fuentes:** asistencia en la identificación y búsqueda de referencias bibliográficas, documentación técnica y antecedentes relevantes para fundamentar el desarrollo del proyecto.

## Uso académico

Proyecto desarrollado por el **Grupo 3** en el marco del curso **TEI201 – Taller de Diseño en Ingeniería**, Facultad de Ingeniería y Ciencias, Universidad Adolfo Ibáñez.
