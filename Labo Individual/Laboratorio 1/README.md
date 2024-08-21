# Laboratorio 1: Introducción a microcontroladores y manejo de GPIOs

## Descripción general
Este laboratorio tiene como objetivo introducir a los estudiantes en el manejo de microcontroladores, específicamente el PIC12F675/PIC12F683, y el uso de GPIOs (General Purpose Input/Output). Se desarrollará un simulador de bingo simplificado que mostrará números aleatorios en dos displays de 7 segmentos.

## Funcionalidad
- Mostrar un número aleatorio en los displays de 7 segmentos al presionar un botón.
- Mantener un registro de los números generados para evitar repeticiones.
- Parpadear el número 99 en el display después de mostrar 10 números y reiniciar el juego.

## Estructura del proyecto
```
Laboratorio 1/
├── Enunciado.pdf
├── README.md
├── informe/
│   ├── Informe.pdf
└── src/
    ├── main.c
    ├── funciones.c
    ├── funciones.h
    └── simulador/
       ├── simulador.c
       └── simulador.h
```

## Requisitos

### Hardware
- **Microcontrolador**: PIC12F675/PIC12F683
- **Displays**: Dos displays de 7 segmentos
- **Botón**: Para iniciar la generación de números
- **Componentes adicionales**: Resistencias, capacitores, etc. según el diseño del circuito

### Software
- **Compilador**: SDCC (Small Device C Compiler)
- **Simulador**: SimulIDE-0.4.15
- **Otros**: Herramientas compatibles con el microcontrolador utilizado

## Entrega
1. **Formato**: El laboratorio debe entregarse en un archivo comprimido que incluya:
   - Un directorio llamado `informe` con el informe en formato PDF.
   - Un directorio llamado `src` con los archivos de código fuente y archivos de simulación.
2. **Plazo**: La entrega debe realizarse antes del **28 de agosto a las 23:59**. Cualquier entrega tardía o en un formato diferente no será revisada y el laboratorio tendrá una nota de cero.

## Estructura del informe
El informe debe contener las siguientes secciones:
1. Portada
2. Introducción/Resumen
3. Nota teórica
4. Desarrollo/Análisis de resultados
5. Conclusiones y recomendaciones
6. Bibliografía
7. Apéndices

## Evaluación
La evaluación del laboratorio se basará en los siguientes criterios:
- Introducción: 5 puntos
- Nota teórica: 20 puntos
- Desarrollo/análisis: 50 puntos
- Conclusiones y recomendaciones: 10 puntos
- Bibliografía: 5 puntos
- Uso de Git y avances: 10 puntos

## Uso de Git
- Se debe demostrar el uso correcto de Git durante el desarrollo del proyecto.
- No se deben subir archivos binarios.
- En el caso del primer laboratorio el desarrollo de este es individual.