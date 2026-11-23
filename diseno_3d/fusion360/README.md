# Modelos 3D – Autodesk Fusion 360

## 1. Descripción general

Esta carpeta contiene los archivos de diseño tridimensional desarrollados en Autodesk Fusion 360 para el prototipo IoT de monitoreo de turbidez.

El diseño contempla el ensamblaje del encapsulado, la distribución de los componentes electrónicos y la fabricación de una bandeja portacomponentes mediante impresión 3D.

Los archivos permiten documentar la geometría del sistema y facilitar su reproducción, modificación y mantenimiento.

## 2. Archivos disponibles

| Archivo | Descripción |
|---|---|
| `nodo_flotante_ensamble.f3d` | Modelo tridimensional del ensamblaje del nodo, incluyendo el encapsulado y representaciones de los principales componentes internos. |
| `bandeja_v9.stl` | Modelo de la bandeja portacomponentes preparado para su fabricación mediante impresión 3D. |

El archivo F3D permite consultar y modificar el diseño en Fusion 360, mientras que el archivo STL contiene la geometría de la bandeja para su procesamiento en un programa de laminado.

## 3. Diseño de la bandeja portacomponentes

La bandeja fue diseñada para organizar y fijar los componentes electrónicos dentro de la caja estanca comercial MGC EX225.

Sus dimensiones generales son de **174 × 158 mm**, con un espesor de **4 mm**.

El diseño permite distribuir el microcontrolador ESP8266 NodeMCU, la protoboard y la batería externa dentro del encapsulado, incorporando elementos de fijación para facilitar el ensamblaje y mantenimiento.

## 4. Configuración de impresión 3D

La bandeja fue preparada para su fabricación mediante impresión 3D por deposición de filamento fundido (FDM), utilizando una impresora Bambu Lab A1 mini y el software Bambu Studio.

### 4.1. Parámetros de impresión

| Parámetro | Configuración |
|---|---|
| Pieza | Bandeja portacomponentes v9 |
| Archivo | `bandeja_v9.stl` |
| Impresora | Bambu Lab A1 mini |
| Software de laminado | Bambu Studio |
| Tecnología | FDM |
| Altura de capa | 0,20 mm |
| Porcentaje de relleno | 15 % |
| Uso de soportes | No |
| Temperatura del extrusor | 220 °C |
| Temperatura de la cama | 65 °C |
| Velocidad de impresión | Perfil estándar 0,20 mm de Bambu Studio |
| Material de filamento | No especificado |

### 4.2. Resultados del laminado

Los siguientes valores fueron obtenidos a partir de la estimación generada por Bambu Studio:

| Indicador | Resultado |
|---|---|
| Longitud de filamento estimada | 21,90 m |
| Masa de filamento estimada | 65,33 g |
| Tiempo de impresión del modelo | 1 h 37 min |
| Preparación y tiempo adicional | 6 min 4 s + 19 s |
| Tiempo total estimado | **1 h 43 min** |
| Cambios de filamento | 0 |
| Coste indicado por el software | 1,31 (unidad monetaria no especificada) |

Los valores corresponden a estimaciones del software de laminado y pueden presentar diferencias respecto del consumo y tiempo efectivos de fabricación.

### 4.3. Consideraciones de fabricación

La configuración seleccionada contempla una altura de capa de 0,20 mm y un relleno del 15 %, buscando obtener una pieza funcional para el montaje de los componentes electrónicos.

La geometría de la bandeja permitió preparar el proceso de impresión sin utilizar estructuras de soporte, de acuerdo con la configuración registrada en Bambu Studio.

Una vez fabricada, la bandeja se integró al interior del encapsulado mediante elementos de fijación, permitiendo organizar los componentes y facilitar el acceso para mantenimiento.

## 5. Integración con el ensamblaje 3D

El archivo `nodo_flotante_ensamble.f3d` representa la disposición general de los componentes dentro del encapsulado.

El ensamblaje incluye representaciones de la caja, tapa, bandeja portacomponentes, microcontrolador ESP8266 NodeMCU, protoboard, batería externa, sensor de turbidez y elementos de fijación.

Este modelo complementa las visualizaciones tridimensionales y los planos técnicos del proyecto.

**Asignatura:** TEI201 – Taller de Diseño en Ingeniería

**Etapa:** Avance #3 – Prototipo IoT Completo
