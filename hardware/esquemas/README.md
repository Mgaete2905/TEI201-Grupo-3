# Esquema de Circuito – Prototipo IoT de Monitoreo de Turbidez

## 1. Descripción general

Esta carpeta contiene la representación gráfica del circuito electrónico desarrollado para el prototipo de monitoreo de turbidez del proyecto TEI201 – Taller de Diseño en Ingeniería, correspondiente al Avance #3.

El diagrama, elaborado con una representación visual tipo Fritzing, permite identificar los componentes principales y comprender su interconexión para la adquisición, procesamiento y transmisión de las mediciones.

## 2. Componentes representados

| Componente | Función |
|---|---|
| Sensor de turbidez G-008 | Detecta variaciones en las partículas suspendidas en el agua y entrega una señal analógica. |
| ESP8266 NodeMCU | Procesa la señal del sensor y transmite las mediciones mediante Wi-Fi. |
| Resistencia de 10 kΩ | Forma parte del divisor de voltaje. |
| Resistencia de 22 kΩ | Forma parte del divisor de voltaje. |
| Protoboard | Facilita la conexión y distribución de los componentes electrónicos. |
| Cables Dupont | Permiten realizar las conexiones eléctricas del circuito. |
| Power bank | Proporciona alimentación eléctrica al prototipo mediante USB. |

## 3. Funcionamiento del circuito

El sensor G-008 utiliza un principio de medición óptico basado en la transmisión de luz a través del agua. Las variaciones en la cantidad de partículas suspendidas modifican la señal de voltaje entregada por el sensor.

Esta señal pasa por un divisor de voltaje compuesto por resistencias de 10 kΩ y 22 kΩ, cuya función es adaptar el nivel eléctrico al rango de entrada analógica del ESP8266 NodeMCU.

Posteriormente, el microcontrolador procesa las mediciones y las transmite mediante Wi-Fi a la plataforma ThingSpeak, donde pueden almacenarse y visualizarse.

## 4. Decisiones de diseño

**Adaptación de voltaje:** se incorporó un divisor resistivo debido a que la salida analógica del sensor puede superar el rango admisible de entrada del ESP8266.

**Conectividad inalámbrica:** se seleccionó el ESP8266 NodeMCU por integrar conectividad Wi-Fi, permitiendo enviar las mediciones sin requerir una conexión permanente con un computador.

**Alimentación portátil:** se utilizó una batería externa para proporcionar energía al sistema y facilitar las pruebas experimentales.

**Montaje modificable:** la utilización de una protoboard y cables Dupont facilita la sustitución de componentes, la revisión de conexiones y la realización de ajustes durante el desarrollo del prototipo.
