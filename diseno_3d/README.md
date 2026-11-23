# Diseño 3D – Nodo Flotante IoT de Monitoreo de Turbidez

## 1. Descripción general

Esta carpeta contiene la documentación del diseño tridimensional y mecánico desarrollado para el prototipo IoT de monitoreo de turbidez, correspondiente al Avance #3 de la asignatura TEI201 – Taller de Diseño en Ingeniería.

El diseño fue desarrollado mediante Autodesk Fusion 360 y contempla la integración de los componentes electrónicos dentro de una caja estanca comercial, incorporando una bandeja portacomponentes fabricada mediante impresión 3D.

El objetivo del diseño es proporcionar una estructura que permita proteger los componentes electrónicos, organizar su distribución interior, facilitar el mantenimiento y favorecer su utilización en entornos acuáticos mediante un sistema de flotación.

La documentación incluye modelos tridimensionales, visualizaciones del ensamblaje y planos técnicos que permiten comprender la configuración y fabricación del dispositivo.

## 2. Organización de la carpeta

### `fusion360/`

Contiene los archivos tridimensionales del nodo flotante y de la bandeja portacomponentes.

**Archivos principales:**

- `nodo_flotante_ensamble.f3d`: modelo tridimensional del conjunto desarrollado en Fusion 360.
- `bandeja_v9.stl`: geometría de la bandeja interior destinada a impresión 3D.

Estos archivos permiten visualizar la disposición de los elementos y consultar la geometría utilizada durante el desarrollo del prototipo.

### `renders/`

Contiene tres visualizaciones tridimensionales obtenidas a partir del modelo CAD:

- **Ensamble cerrado:** muestra la configuración exterior del encapsulado.
- **Vista interior:** presenta la disposición de los componentes dentro de la caja.
- **Vista explosionada:** identifica las piezas del conjunto y permite comprender su secuencia de ensamblaje.

Las imágenes complementan los modelos editables y facilitan la presentación visual del diseño.

### `planos/`

Contiene el archivo `planos.pdf`, compuesto por cuatro láminas técnicas:

1. Plano de conjunto general del nodo.
2. Plano de modificaciones de la caja estanca.
3. Plano de detalle de la bandeja portacomponentes.
4. Plano de detalles de montaje y conexiones.

Los planos incluyen vistas, dimensiones, detalles constructivos e indicaciones para orientar la fabricación y el ensamblaje.

## 3. Componentes del diseño mecánico

| Elemento | Descripción |
|---|---|
| Caja estanca | Estructura exterior destinada a alojar y proteger los componentes electrónicos. |
| Tapa | Permite cerrar el encapsulado y acceder a su interior para mantenimiento. |
| Bandeja portacomponentes | Pieza interior impresa en 3D que permite organizar y fijar los componentes. |
| Separadores y tuercas | Elementos utilizados para sostener la bandeja dentro de la caja. |
| Sensor de turbidez G-008 | Se integra mediante una abertura en la base del encapsulado. |
| ESP8266 NodeMCU | Microcontrolador ubicado sobre la protoboard en el interior del sistema. |
| Protoboard | Superficie de conexión para los componentes electrónicos. |
| Placa acondicionadora | Permite conectar y acondicionar la señal del sensor. |
| Power bank | Fuente de alimentación portátil instalada en el interior del encapsulado. |
| Velcro | Elemento de fijación utilizado para sujetar componentes sobre la bandeja. |
| Flotadores | Elementos destinados a proporcionar flotabilidad al conjunto. |

## 4. Especificaciones del diseño

| Característica | Especificación |
|---|---|
| Software de diseño | Autodesk Fusion 360 |
| Unidades | Milímetros (mm) |
| Caja comercial | MGC EX225 |
| Dimensiones exteriores de la caja | 255 × 200 × 80 mm |
| Clasificación nominal de la caja | IP65 |
| Dimensiones generales de la bandeja | 174 × 158 mm |
| Espesor de la bandeja | 4 mm |
| Método de fabricación de la bandeja | Impresión 3D |
| Formatos de documentación | F3D, STL, PNG y PDF |

Las dimensiones exteriores corresponden únicamente a la caja comercial, sin considerar los elementos de flotación.

La clasificación IP65 corresponde a la especificación nominal de la caja y no constituye una certificación del conjunto después de realizar las modificaciones para instalar el sensor.

## 5. Consideraciones de diseño

### Protección de los componentes

Se seleccionó una caja estanca comercial para alojar la electrónica y reducir su exposición directa al agua.

El diseño contempla una abertura inferior para instalar el sensor de turbidez, utilizando material de sellado alrededor de la unión.

### Distribución interior

La bandeja portacomponentes permite organizar la batería externa, el microcontrolador y la protoboard, aprovechando el espacio disponible dentro del encapsulado.

Su configuración considera puntos de fijación y espacios destinados a los distintos componentes.

### Accesibilidad y mantenimiento

El diseño incorpora una bandeja desmontable y elementos de sujeción que facilitan el acceso a los componentes electrónicos.

Esto permite realizar inspecciones, modificaciones y eventuales reemplazos sin intervenir directamente la estructura principal de la caja.

### Flotabilidad

El prototipo contempla flotadores para mantener el encapsulado sobre la superficie del agua y permitir que el sensor permanezca en contacto con el medio.

Los flotadores forman parte de la solución física del dispositivo, aunque no están representados en las tres visualizaciones CAD disponibles.

## 6. Fabricación e integración física

El diseño tridimensional fue utilizado como referencia para construir e integrar el prototipo físico.

El proceso incluyó la preparación de la caja, la instalación del sensor de turbidez, la fabricación de la bandeja mediante impresión 3D y el montaje de los componentes electrónicos.

Posteriormente, se organizaron las conexiones y se instaló la batería externa dentro del encapsulado.

El montaje se encuentra documentado mediante fotografías en la carpeta de hardware del repositorio.

## 7. Validación y limitaciones

Se realizó una prueba inicial de estanqueidad del encapsulado en una fuente con agua, durante la cual no se observó ingreso de agua al interior de la caja.

Esta prueba proporciona evidencia preliminar del funcionamiento del sistema de sellado bajo las condiciones ensayadas.

