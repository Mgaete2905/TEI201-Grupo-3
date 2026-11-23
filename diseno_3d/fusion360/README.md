# Modelos 3D – Fusion 360

## 1. Descripción general

Esta carpeta contiene los archivos de modelado tridimensional desarrollados para el diseño mecánico del prototipo IoT de monitoreo de turbidez, correspondiente al Avance #3 de la asignatura TEI201 – Taller de Diseño en Ingeniería.

El diseño contempla dos elementos principales: el nodo flotante, que integra el encapsulado y los componentes del sistema, y una bandeja portacomponentes destinada a organizar y fijar la electrónica en el interior de la caja.

Los modelos permiten visualizar la disposición de los elementos, evaluar su integración espacial y documentar las soluciones adoptadas para la fabricación y el ensamblaje.

## 2. Archivos del diseño

### `nodo_flotante_ensamble.f3d` – Modelo del nodo flotante

Archivo de diseño tridimensional desarrollado en Autodesk Fusion 360, correspondiente al conjunto mecánico del prototipo.

El modelo representa la integración del encapsulado con los elementos principales del sistema, considerando:

- Caja de protección para los componentes electrónicos.
- Distribución interior de los componentes.
- Bandeja portacomponentes.
- Ubicación del sensor de turbidez.
- Espacios destinados al microcontrolador y a la batería externa.
- Integración del sistema de flotación.

Este archivo constituye la referencia digital del conjunto y permite estudiar la disposición de los componentes antes de su ensamblaje físico.

### `bandeja_v9.stl` – Bandeja portacomponentes

Archivo tridimensional de la bandeja interior diseñada para sostener y organizar los componentes electrónicos dentro del encapsulado.

**Características geométricas:**

| Característica | Especificación |
|---|---|
| Dimensiones generales | 174 × 158 mm |
| Espesor máximo | 4 mm |
| Formato | STL |
| Aplicación | Soporte interior de componentes |
| Método de fabricación previsto | Impresión 3D |

La bandeja contempla espacios para instalar el ESP8266 NodeMCU, la protoboard y la batería externa, además de una abertura destinada a la integración del sensor de turbidez.

Su diseño busca facilitar el montaje, mantener ordenados los componentes y permitir su acceso para futuras modificaciones o tareas de mantenimiento.

## 3. Relación entre los modelos

El nodo flotante representa el conjunto general del dispositivo, mientras que la bandeja constituye una pieza específica de su estructura interior.

La bandeja se instala dentro del encapsulado y permite organizar los componentes electrónicos sin fijarlos directamente a la base de la caja.

Esta configuración facilita el ensamblaje y permite separar las funciones de protección exterior y soporte interior.

## 4. Criterios de diseño

Durante el desarrollo de los modelos tridimensionales se consideraron los siguientes criterios:

**Integración:** distribución de los componentes electrónicos dentro del espacio disponible en el encapsulado.

**Protección:** utilización de una caja que permita aislar la electrónica del contacto directo con el agua.

**Mantenimiento:** incorporación de una bandeja desmontable para facilitar la revisión y sustitución de componentes.

**Fabricación:** diseño de una pieza interior compatible con tecnologías de impresión 3D.

**Flotabilidad:** consideración de elementos de flotación para mantener el dispositivo sobre la superficie del agua durante su utilización.

## 5. Instrucciones de apertura

### Modelo del nodo flotante

1. Abrir Autodesk Fusion 360.
2. Importar o abrir el archivo `nodo_flotante_ensamble.f3d`.
3. Revisar el modelo tridimensional y la disposición de sus componentes.
4. Utilizar las herramientas de visualización para inspeccionar el conjunto desde diferentes perspectivas.

### Modelo de la bandeja

1. Abrir el archivo `bandeja_v9.stl` en un programa compatible con archivos STL.
2. Inspeccionar la geometría de la pieza.
3. Revisar sus dimensiones y orientación.
4. Preparar el archivo en un programa de laminado (*slicer*) si se desea fabricar mediante impresión 3D.

## 6. Fabricación e integración física

El diseño tridimensional permitió avanzar desde la propuesta digital hacia la construcción del encapsulado físico.

La bandeja portacomponentes fue fabricada mediante impresión 3D e instalada dentro de la caja de protección.

Posteriormente, se incorporaron el microcontrolador ESP8266, la protoboard, la batería externa y el sensor de turbidez, utilizando los espacios y puntos de fijación previstos.

El montaje final se encuentra documentado mediante fotografías en la sección de hardware del repositorio.

