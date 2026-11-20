# TEI201 – Sistema IoT de Monitoreo de la Calidad del Agua

**Universidad Adolfo Ibáñez | Taller de Diseño en Ingeniería | Grupo 3**

## Información del equipo

**Integrantes:**
- Montserrat Gaete
- Felipe Lagos
- Alfonso Rosello
- Alex Sabag

**ODS asociado:** ODS 14 – Vida submarina (meta 14.1).

## Problemática

El proyecto aborda la necesidad de contar con herramientas accesibles para monitorear la calidad del agua en actividades relacionadas con la salmonicultura.

La disponibilidad limitada de información continua e independiente dificulta la detección oportuna de alteraciones en las condiciones del agua y el seguimiento de posibles impactos ambientales.

## Descripción del proyecto

El proyecto busca desarrollar un sistema de monitoreo de la calidad del agua mediante distintas iteraciones de prototipos, incorporando progresivamente sensores, sistemas de procesamiento de datos y herramientas de comunicación.

La primera versión, denominada **Prototipo Alpha**, utilizó un Arduino Uno y un sensor TDS para registrar sólidos disueltos en el agua, incorporando alertas locales mediante LED y zumbador.

Posteriormente, el proyecto evolucionó hacia un **prototipo IoT de monitoreo de turbidez**, utilizando un ESP8266 NodeMCU y un sensor G-008. Esta versión permite transmitir mediciones a ThingSpeak, estimar valores de turbidez en NTU y generar notificaciones mediante Telegram.

El desarrollo contempla etapas de diseño, construcción, programación, caracterización experimental y evaluación, con el propósito de mejorar progresivamente las capacidades del sistema.

## Estado del proyecto

- **Curso:** TEI201 – Taller de Diseño en Ingeniería.
- **Última actualización:** 19/11/2026.
- **Estado:** Desarrollo y evaluación experimental.
- **Versión inicial:** Prototipo Alpha.
- **Versión posterior:** Prototipo IoT de turbidez.

## Organización del repositorio

El repositorio reúne la documentación y los archivos correspondientes a las distintas etapas de desarrollo del proyecto.

Cada prototipo cuenta con su propia documentación técnica, donde se incluyen los antecedentes de diseño, componentes utilizados, esquemáticos, código de programación y resultados de las pruebas realizadas.

Esta organización permite mantener un registro de la evolución del proyecto y facilitar la consulta de las distintas versiones.

## Tecnologías utilizadas

A lo largo del desarrollo se han utilizado distintas herramientas y tecnologías, entre ellas:

- Arduino Uno y ESP8266 NodeMCU.
- Sensores TDS y de turbidez G-008.
- Arduino IDE.
- ThingSpeak para almacenamiento y visualización de datos.
- Telegram para notificaciones.
- Fusion 360 para diseño y modelado tridimensional.

## Uso académico

Proyecto desarrollado por el Grupo 3 en el marco del curso **TEI201 – Taller de Diseño en Ingeniería**, Facultad de Ingeniería y Ciencias, Universidad Adolfo Ibáñez.
