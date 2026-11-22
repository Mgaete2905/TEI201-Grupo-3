# Planos Técnicos – Prototipo IoT de Monitoreo de Turbidez

## 1. Descripción general

Esta carpeta contiene los planos técnicos del encapsulado diseñado para el prototipo IoT de monitoreo de turbidez, desarrollado en el marco del Avance #3 de la asignatura TEI201 – Taller de Diseño en Ingeniería.

El diseño corresponde a un nodo flotante destinado al monitoreo de turbidez en sistemas de salmonicultura. Su estructura contempla una caja estanca, una bandeja interior desmontable y mecanismos de fijación para los componentes electrónicos.

Los planos permiten documentar las dimensiones, materiales, modificaciones, conexiones y procedimientos necesarios para la fabricación y el ensamblaje del sistema.

## 2. Archivo disponible

**`planos.pdf` – Planos técnicos del nodo flotante IoT**

Documento de cuatro páginas en formato A3, con dimensiones expresadas en milímetros y tolerancias generales ISO 2768-m.

## 3. Descripción de los planos

### PL-01. Conjunto general – Nodo flotante

Presenta la distribución general del prototipo ensamblado mediante vistas, cortes y una lista de piezas.

Incluye la disposición de la caja estanca, el sensor de turbidez, la bandeja portacomponentes, el ESP8266 NodeMCU, la protoboard y la batería externa.

También identifica los elementos de fijación y los materiales necesarios para el montaje.

**Escala:** 1:2.

### PL-02. Caja estanca – Modificaciones

Detalla las modificaciones previstas para una caja comercial MGC EX225, de dimensiones exteriores 255 × 200 × 80 mm y clasificación IP65.

Incluye la ubicación del orificio destinado al sensor, las zonas de fijación de los separadores y un detalle ampliado del montaje y sellado del sensor.

Se especifica una prueba de estanqueidad previa a la instalación de los componentes electrónicos.

**Escala:** 1:2.

### PL-03. Bandeja portacomponentes v9

Presenta el diseño de una bandeja interior removible, destinada a organizar y sostener los componentes electrónicos dentro del encapsulado.

La pieza tiene dimensiones generales de 174 × 158 mm y un espesor de 4 mm. Contempla orificios para separadores M3, una abertura para el sensor y zonas de fijación mediante velcro para la batería externa y la protoboard.

Se incluyen parámetros propuestos para su fabricación mediante impresión 3D FDM, utilizando PLA o PETG.

**Escala:** 1:1.

### PL-04. Detalles, montaje y conexiones

Describe los mecanismos de unión de la bandeja mediante separadores y tuercas M3, así como los procedimientos previstos para la fabricación, instalación y desmontaje del sistema.

Incluye una secuencia de 12 pasos que abarca la impresión de la bandeja, las modificaciones de la caja, el sellado del sensor, la fijación de los componentes y la prueba de estanqueidad.

También presenta las conexiones eléctricas principales entre el sensor, la placa acondicionadora, el ESP8266 y la alimentación USB.

**Escala de detalles:** 4:1.

## 4. Criterios de diseño

El encapsulado fue diseñado considerando los siguientes aspectos:

- **Protección de componentes:** utilización de una caja estanca para alojar la electrónica y mantenerla separada del agua.
- **Organización interna:** incorporación de una bandeja que permite distribuir los componentes dentro de la estructura.
- **Mantenimiento y reparación:** utilización de fijaciones desmontables y velcro para facilitar el acceso y reemplazo de componentes.
- **Fabricación:** diseño de una bandeja compatible con impresión 3D y modificaciones específicas sobre una caja comercial.
- **Integración del sensor:** disposición de una abertura inferior que permite instalar la sonda de turbidez y sellar su unión con el encapsulado.

## 5. Alcance de la documentación

Los planos constituyen la documentación técnica del diseño mecánico propuesto para el nodo flotante.

Las dimensiones, materiales y procedimientos descritos permiten orientar su fabricación y ensamblaje. Sin embargo, las especificaciones de diseño y los ensayos propuestos no deben interpretarse como evidencia de fabricación o validación física, salvo que se encuentren respaldados por pruebas experimentales.

---

**Proyecto:** Monitoreo IoT de Turbidez

**Asignatura:** TEI201 – Taller de Diseño en Ingeniería

**Etapa:** Avance #3 – Prototipo IoT Completo

**Documento:** `planos.pdf`

**ODS asociado:** ODS 14 – Vida Submarina, meta 14.1
