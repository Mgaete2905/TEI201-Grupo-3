# Hardware – Prototipo IoT de Monitoreo de Turbidez

## 1. Descripción general

Esta carpeta contiene la documentación técnica del hardware desarrollado para el proyecto de monitoreo IoT de turbidez, correspondiente al Avance #3 de la asignatura TEI201 – Taller de Diseño en Ingeniería.

El prototipo integra un sensor de turbidez G-008, un microcontrolador ESP8266 NodeMCU y un sistema de alimentación portátil, permitiendo adquirir mediciones y transmitirlas de forma inalámbrica a ThingSpeak.

Además, se desarrolló un encapsulado físico compuesto por una caja estanca, una bandeja portacomponentes fabricada mediante impresión 3D y elementos de flotación. Esta estructura busca proteger los componentes electrónicos, facilitar su mantenimiento y permitir la utilización del dispositivo sobre superficies de agua.

## 2. Organización de la carpeta

### `esquemas/`

Contiene la representación gráfica del circuito electrónico, incluyendo las conexiones entre el sensor de turbidez, el divisor de voltaje y el ESP8266 NodeMCU.

### `bom/`

Contiene la lista de materiales (*Bill of Materials*), con los componentes electrónicos, materiales de montaje y elementos necesarios para la construcción del prototipo.

### `fotos/`

Contiene el registro fotográfico del montaje electrónico, la fabricación del encapsulado, las conexiones y las pruebas realizadas con el sistema.

La documentación del diseño 3D y los planos técnicos del encapsulado se encuentra en la sección correspondiente del repositorio.

## 3. Componentes principales

| Componente | Función |
|---|---|
| Sensor de turbidez G-008 | Detecta variaciones en las partículas suspendidas mediante una señal analógica de voltaje. |
| ESP8266 NodeMCU | Procesa las mediciones y transmite los datos mediante Wi-Fi. |
| Divisor de voltaje | Adapta la señal analógica del sensor al rango de entrada del microcontrolador. |
| Protoboard y cables Dupont | Permiten realizar las conexiones eléctricas del sistema. |
| Power bank de 10.000 mAh | Proporciona alimentación portátil al prototipo mediante USB. |
| Caja estanca | Aloja y protege los componentes electrónicos frente al contacto con el agua. |
| Bandeja portacomponentes | Organiza y sostiene los elementos electrónicos dentro del encapsulado. |
| Flotadores | Proporcionan flotabilidad y contribuyen a mantener el encapsulado sobre la superficie del agua. |
| Elementos de fijación y sellado | Permiten instalar los componentes, asegurar la bandeja y sellar la abertura del sensor. |

## 4. Diseño del encapsulado y sistema de flotación

Para integrar los componentes electrónicos se utilizó una caja estanca comercial, modificada para incorporar el sensor de turbidez en su parte inferior.

En el interior se instaló una bandeja portacomponentes diseñada en Fusion 360 y fabricada mediante impresión 3D. Esta permite organizar la protoboard, el microcontrolador y la batería externa, además de facilitar el acceso a los elementos para futuras intervenciones.

El sensor se instaló mediante una abertura en la base de la caja, utilizando material de sellado alrededor de la unión para reducir el riesgo de ingreso de agua.

Adicionalmente, el diseño incorpora flotadores destinados a mantener el dispositivo sobre la superficie del agua. Su función es proporcionar soporte y estabilidad al encapsulado, permitiendo que el sensor permanezca en contacto con el medio que se desea monitorear.

El conjunto fue concebido considerando criterios de protección, accesibilidad, mantenimiento y posibilidad de reemplazo de componentes.

## 5. Procedimiento de ensamblaje

El proceso de construcción e integración del hardware comprendió las siguientes etapas:

1. **Preparación del circuito:** conexión del sensor G-008 al ESP8266 NodeMCU mediante la protoboard y el divisor de voltaje.
2. **Verificación electrónica:** comprobación de la lectura de voltaje y de la transmisión de datos a ThingSpeak.
3. **Preparación del encapsulado:** realización de las modificaciones necesarias en la caja para instalar el sensor y los elementos de fijación.
4. **Instalación del sensor:** colocación del sensor en la abertura correspondiente y aplicación del material de sellado.
5. **Montaje de la bandeja:** incorporación de la placa impresa en 3D y sus elementos de sujeción.
6. **Integración de componentes:** fijación del ESP8266, la protoboard y la batería externa sobre la bandeja.
7. **Organización del cableado:** distribución de los cables para facilitar el cierre de la caja y el acceso a los componentes.
8. **Incorporación de los flotadores:** integración de los elementos destinados a proporcionar flotabilidad al conjunto.
9. **Cierre y comprobación:** revisión del montaje y realización de pruebas de funcionamiento y estanqueidad en condiciones controladas.

## 6. Pruebas y validación del hardware

El hardware fue sometido a pruebas de funcionamiento electrónico y de integración física.

Durante las pruebas experimentales se verificó la adquisición de mediciones del sensor y su transmisión hacia ThingSpeak, permitiendo visualizar los datos y utilizar sus resultados en el sistema de alertas.

Adicionalmente, se realizó una prueba de estanqueidad del encapsulado en una fuente con agua. Durante esta prueba no se observó ingreso de agua al interior de la caja, proporcionando evidencia inicial del funcionamiento del sistema de sellado.

Estos resultados corresponden a condiciones controladas y no constituyen una certificación de resistencia a inmersión prolongada ni de funcionamiento continuo en ambientes acuáticos reales.

## 7. Precauciones y consideraciones de mantenimiento

- Verificar las conexiones eléctricas y la polaridad antes de energizar el sistema.
- Comprobar que el voltaje aplicado a la entrada analógica del ESP8266 se encuentre dentro de su rango admisible.
- Revisar el estado del sellado alrededor del sensor antes de cada prueba en agua.
- Evitar la exposición directa de la electrónica y de los conectores a la humedad.
- Desconectar la alimentación antes de intervenir los componentes internos.
- Revisar la fijación de la bandeja y de los flotadores antes de utilizar el dispositivo sobre agua.
- Inspeccionar periódicamente el sensor y sus conexiones para identificar posibles deterioros.

## 8. Problemas frecuentes

| Problema | Posible causa | Acción recomendada |
|---|---|---|
| El sensor no entrega mediciones | Conexión incorrecta o alimentación insuficiente | Revisar cableado, alimentación y señal analógica. |
| Las lecturas presentan fluctuaciones | Variaciones en la muestra, movimiento del sensor o interferencias eléctricas | Estabilizar el sensor y revisar las conexiones. |
| Los datos no aparecen en ThingSpeak | Problemas de Wi-Fi o configuración de transmisión | Revisar conectividad y parámetros del canal. |
| El ESP8266 se reinicia | Alimentación inestable o conexiones deficientes | Comprobar el suministro USB y los contactos eléctricos. |
| Se observa humedad en el encapsulado | Sellado deteriorado o cierre incorrecto | Desconectar el sistema, secarlo y revisar las uniones antes de reutilizarlo. |
| El conjunto pierde estabilidad sobre el agua | Distribución inadecuada de la masa o fijación de los flotadores | Revisar el equilibrio del conjunto y la sujeción de los elementos de flotación. |

## 9. Alcance y mejoras futuras

El montaje físico permitió integrar los componentes electrónicos dentro de una estructura protegida y desmontable, avanzando desde un circuito experimental hacia un prototipo con encapsulado propio.

Entre las mejoras futuras se consideran la evaluación prolongada de la estanqueidad, la caracterización de la estabilidad del sistema de flotación, la optimización del cableado y la validación del funcionamiento en condiciones ambientales representativas de su aplicación.


**Etapa:** Avance #3 – Prototipo IoT Completo

**ODS asociado:** ODS 14 – Vida Submarina, meta 14.1
