### Información del Equipo
- **Integrantes:**
  - Montserrat Gaete
  - Felipe Lagos
  - Alfonso Rosello
  - Alex Sabag
  
- ODS 14: Vida submarina.
- La falta de monitoreo continuo e independiente de la contaminación que genera la salmonicultura: hoy la carga de nutrientes y residuos se conoce por autorreportes puntuales de las propias empresas, y las comunidades y pescadores no tienen cómo verificar el estado del agua antes de que el daño llegue al mar.

### Descripción del Proyecto
Prototipo Alpha IoT de monitoreo de la calidad del agua para la fase de agua dulce de la salmonicultura (ODS 14, meta 14.1). Como primer prototipo, se tiene un sensor de sólidos disueltos (TDS) conectado a un Arduino Uno mide el agua cada 1 segundo, en ppm. Si la lectura supera un umbral ajustable desde el computador, se activan un LED y un zumbador de alerta. Los datos se envían por comunicación serial (USB) al computador. Proyecto del curso TEI201 – Taller de Diseño en Ingeniería (UAI).

### Estado del Proyecto
- **Versión actual:** v0.1 (Alpha)
- **Última actualización:** 25/10/2026
- **Estado:** Prototipo Alpha en desarrollo.

---

##  Estructura del Repositorio
```
├── hardware/          # Circuitos, esquemas y BOM
├── software/          # Código Arduino y librerías
├── diseno_3d/        # Modelos Fusion 360 y renders
├── testing/          # Validación con usuarios
├── documentacion/    # Reportes y presentación
└── iteraciones/      # Historial de versiones
```

---

##  Inicio Rápido

### Requisitos Previos
- Arduino IDE 
- Fusion 360

### Instalación
1. Clonar el repositorio
2. Librerías: no se necesita instalar ninguna, el código usa solo funciones nativas de Arduino.
3. Cargar código en Arduino.
4. Abrir el monitor serial a **9600 baudios**, con la opción **"Nueva línea"** activada.
5. Sumergir la sonda del sensor en el agua. Las lecturas aparecen en ppm, una por segundo.
6. Para cambiar el umbral de alerta, escribir `umbral=VALOR` en el monitor serial (por ejemplo, `umbral=1500`).
7. Para calibrar con una solución de ppm conocido, escribir `calibrar=VALOR`.
---

##  Checklist de Entrega

### Hardware ✓
- [ ] Esquema del circuito (Fritzing/Wokwi)
- [ ] BOM completo
- [ ] Fotos de alta resolución

### Software ✓
- [ ] Código comentado
- [ ] Librerías documentadas
- [ ] Manual de instalación

### Diseño 3D ✓
- [ ] Archivos Fusion 360 (.f3d) con TODOS los componentes
- [ ] Renders de alta calidad (1+ ángulos)
- [ ] Planos técnicos

### Testing ✓
- [ ] Reporte de testing con usuarios (mín. 5)
- [ ] Evidencias fotográficas/videos
- [ ] Datos cuantitativos

### Documentación ✓
- [ ] Reporte final (máx. 15 páginas)
- [ ] Presentación (10 min)

---


---

##  Licencia
Este proyecto es desarrollado como parte del curso TEI201 - Facultad de Ingenieria y Ciencias - Universidad Adolfo Ibañez
