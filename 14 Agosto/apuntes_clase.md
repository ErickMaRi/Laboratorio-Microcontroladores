# Primera clase

## Introducción

No debemos subestimar el tiempo que toma hacer los proyectos.

### ¿Que es un Microcontrolador?

Un sistema empotrado o embebido, un dispositivo de hardware que se puede programar para una funcionalidad en específico, particularmente diseñados para ser de uso general por su flexibilidad. Se puede interfazar con sensores, controladores, actuadores y cargas _muy pequeñas_ .

Se conocen también como computer on chip o sistema embebido, es decir, si una aplicacion implica medir y mostrar algo suele implementarse con un microcontrolador. Estos se delegan a funciones abstractas como UX o comunicación de IoT. Usualmente procesamos esa información de forma digital y no analógica (a nivel de puertos).

Tiene memoria RAM y ROM, puertos, clock, ADC, CPU , I/O y DAC. Todos estos componentes interfazando en distintas arquitecturas, tamaños de palabras, capacidades y funciones. Usualmente un Arduino está sobredimensionado y para aplicaciones reales se usan microcontroladores tan "tontos" como sea posible, donde la RAM sea lo más limitada posible **_(Keep It Simple, Stupid)_** . Por las razones anteriores es necesario mantener en mente la manera en la que un código específico se pueda reformatear para resolver la tarea de forma menos costosa en RAM, throughput, paralelización, serialización, etc. Usando las mejores prácticas y patrones de diseño para código simple.

#### Estructura básica

- **CPU**: Existe al menos uno, lee y ejecuta.
- **Memoria**: Contiene las instrucciones y datos.
- **Puertos E/S**: Sirve para comunicar con otros sistemas digitales.
- **Buses**: Grupo de conexiones agrupadas entre CPU y otros periféricos.
- **Contadores/Temporisadores**: Cuentan eventos, tiempo, generación de funciones, PWM, relojes de control, etc.
- **Puertos seriales**: Para comunicarnos con el mundo exterior (pines limitados), no nos vamos a comunicar en paralelo, todas las comunicaciones son seriales (hacen fila).
- **Interrupciones**: Proveen mecanismos para atender cambios externos, internos, de hardware o software. Boton de pare de emergencia, interrumpir el script y rápidamente usar otro segmento del código, interrupciones basádos en periféricos, etc.
- **Convertiddores A/D D/A**.

#### Tipos de microcontroladores: bits

Se pueden categorizar según la resolución:

- **8-bits** : Se usan para operaciones aritméticas básicas.
- **16-bits** : Son los más comunes, tienen más precisión y desempeño.

- **32-bits** : Operan en alta precisión, caros, sirven para machine learning, aplicaciones médicas, solo se usan si tenemos que.

#### Tipos de microcontroladores: memoria

- **Interna** : Diseñado de forma en la que contiene su propia memoria, lo normal hoy.
- **Externa** : No tiene memoria programable en el chip, ultradifícil y ultrabarato.

#### Tipos de microcontroladores: conjunto de instrucciones

- **RISK** : La mayoría de ellos usan un conjunto reducido de instrucciones.
- **CISC** : La minoría usan conjunto complejo de instrucciones.

### Diferencia entre microprocesador y microcontrolador.

- **Procesador** : Maneja tareas de grán capacidad computacional.
- **Controlador** : Maneja tareas puntuales y específicas.

Conforme el tiempo avanza se hace una línea más delgada entre los dos.

### ARM 

Es una **arquitectura digital** desarrollada en VeriLog, de código abierto, optimizada para reducir el consumo de potencia y usar diseños simplificados. Usando técnicas como clock gating y otros para consumir menos potencia, esta arquitectura es cada vez más popular.

- Si RAM y ROM están fuera de chip se puede considerar un microprocesdor.

- Si la RAM y ROM son internas a la oblea se puede considerar microcontrolador.

## Historia

### TI

Texas Instruments produce los primeros.

- Primeros microcontroladores se remontan a los principios de los años 70.

- Existen referencias que acreditan a ingenieros de TI como los creadores del primer microcontrolador en 1971, el TMS 1000, con unos poderosos **cuatro bits** disponible en 1974, con memoria ROM, RAM y unas cuantas línes de entrada/salida.

- Set de instrucciones de 43 a 54 dependiendo de la familia.

- Se visualizaba en el mercado como una computer-on-chip y se usó en automoviles, juegos, accesorios digitales e instrumentos de medición.

### Intel

- Se introduce el poderosísimo 8048 en el '76.
- Se uso como procesadordel teclado de la PC de IBM.
- El 8048 tenía 8-bits, 2 timers de 8-bits, 27 E/S, 64 bytes de ram, 1K de masked ROM y arquitectura Harvard modificada.
- En 1980 se lanza el 8051.

### EEPROM

Antes de las Electrically Erasable Programmable Read Only Memory se usaba luz ultravioleta.

### Microcontroladores exitosos

#### 6800

- MCU de 8 bits fabricado por Motorola en 1974, operaba a 1Mhz, tiene un bus de direcciones de 16 bits, 64 Kb de memoria, bus bidireccional de 8 bits, 72 instrucciones y 7 modos de direccionamiento
- Populares en computadoras, juegos de arcade, pinball.
- Programados en ensamblador.

#### 8051

- Uno de los más usados.

#### PIC

_... Peak ..._

Fabricado por Microchip Technology en el 1976, memorias de 8/16/32 bits.
Instrucciones distintas por familia.
Traía ADC y demás facilidades "modernas".
Se programaba en C o C++

#### AVR

Por Atmel en 1996, tipo Harvard modificada RISC, de los primeros en usar memoria flash-on-chip.
- Pines IO ADC DAC, comunicaciones (UART, I2C, CAN, SPI, USE), timers, counters, interrupciones, etc.

#### STM32

Familia de 32 bits fabricados por STMElectronics desde 2016

Agrupados alrededor del mismo procesador, altamente complejos y considerablemente funcionales.

## Usos

Hay una grán cantidad, entre estas destacan:

- Sensado

- Control

- Instrumentación

- Robótica

- IoT

- ML

## Tarjetas de desarrollo

No son lo usado en producción pues:

- Contienen un microcontrolador con interfaces de fácil acceso.

- Pueden contener periféricos adicionales ya incluidos.

- Pueden incluir los circuitos para alimentar.

- Creadas para facilitar el desarrollo y "calidad de vida".

## CUIDADOS Y MANIPULACIÓN

""" Lo barato sale caro, la exelencia no es accidental, medir dos veces y cortar una no deja muebles chuecos."""

- Siempre se queman cosas
- Al manipular un MCU o tarjeta de desarrollo se deben usar las herramientas y espacios correctos.
- Evitar descargas electro-estáticas
- Realizar diseño previo de consumo de periféricos, no improvisar.
- Revisar características eléctricas de MCU, voltajes de operación y corrientes E/S.
- Usar la pulsera y el mat electroestático.
- Revisar a detalle la impedancia de entrada de los puertos y evitar el ruido electromagnético con optoacopladores, diodos que protejan, etc. Idealmente la fuente es la que trabaja protegiendo y aislando el microcontrolador a través de acoples diseñados que no dañen los puertos con back EMF.

### Malas prácticas

**Cortos**: Cuidado antes de energizar

**Sobre corriente**: Revisar el consumo al nivel de diseño y usar drivers de corriente.

**Sobre voltaje**: Revisar las polaridades y entregar la tensión especificada por la placa.

**Componentes externos**: Revisar funcionamiento y conexión para realizar verificación por unidad de los sistemas a diseñar, no buscarle la cola al zorro.

**Malas prácticas**: Tener un lugar limpio, fuentes estables, superficies no metálicas.

## Temas de Actualidad