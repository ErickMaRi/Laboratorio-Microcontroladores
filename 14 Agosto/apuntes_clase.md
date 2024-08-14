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

**Lo barato sale caro, la exelencia no es accidental, medir dos veces y cortar una no deja muebles chuecos**

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

### Que es IoT?

Internet de las Cosas, sistema de dispositivos informáticos, máquinas y digitales. Provistos de identificadores únicos (UID) y la capacidad de transferir datos a través de una red sin requerir la  interacción de personas.

#### IOT y MCU

Tenemos un dispositivo (como un arduino uno con un sensor de gas), conectado a través de un periférico (como un ESP8266), y se comunica a través del internet a un servidor (como Thingspeak) que es un broker o intermediario entre el sistema diseñado y el resto del internet (como el resto de los dispositivos) que pueden ser controlados por sistemas como teléfonos inteligentes, periféricos o páneles. Entonces nuestro arduino podría por ejemplo comunicarle al controlador del invernadero que el CO2 aumentó súbitamente y a través de algún esquema de control realizar una acción, sin requerir que un controlador integre toda la información en un solo lugar.

En resumen el patrón de diseño tenemos dispositivos con pocas funciones comunicando cosas pequeñas (no video o imágenes).

#### ML?

Subconjunto de la **AI** para desarrollar sistemas que aprenden, permite a las máquinas aprender, programas que identifican patrones. **Tiny ML** es lo más comúnmente usado en este contexto con el uso de modelos cuantizados (bitnet). 

##### TinyML?

Campo novedoso de las aplicaciones: realiza análisis de datos en dispositivos que sensan idealmente usando muy poca potencia, típicamente en el rango de mW. Con la filosofía de processing on system, preprocesando los datos antes de comunicarse, para no enviar los datos crudos al servidor (mucho troughput, es caro).

Se pueden usar cosas como autoencoders para representar un conjunto de datos en un espacio latente de datos para ser decodificado on server.

No es normal que se aprenda on edge, cocinamos el modelo y luego realizamos sólo inferencia (luego de cuantizar).

### GPIO?

General Purpose Input Output

- La grán mayoría de pines en un MCU son **GPIOs**.
- Los que no lo son: **Vdd**, **Vss**, **MCLR** (reset), entradas de reloj, etc.
- Pines asignados a **GPIOs** comparten otras funciones.
- Se agrupan en puertos, algunos sólo uno tienen.

#### Como funciona un GPIO?

- Se operan muy similar entre ellos, por diseño.

- Generalmente se configuran a través de un registro para leer o escribir.

- Dependiendo del funcionamiento se configuran múltiples registros, dependiendo de la **hoja de datos**

- Si se configura como entrada se realiza la lectura con polling o por medio de interrupciones (más adelante vemos como realizamos acciones respecto el estado del pin).

- Si se configura como salida, lo manejamos en términos de valores altos o bajos (1 / 0).

Por ejemplo en el **PIC 12F683** se usan varios registros para operarlos:

- **TRISIO** : En este registro establecemmos si un pin es salida o entrada. TODO??? corregir
- **GPIO** : En modo de entrada se lee el estado del pin y se escribe al latch de salida. TODO??? corregir
- **ANSEL/CMCON**: Debe inicializarse para configurar un canal analógico, como entrada digital. 
- **CONFIG** : Sirve para usar pines de reset como entradas.

Entonces en el **PIC** tenemos un registro que usa seis bits para configurar los TRISIO para entrada o salida (donde sea posible uno u el otro), este registro debe ser configurado usualmente en la inicialización del programa en **C**.

El registro **GPIO** nos va a servir para configurar los seis pines del PIC si van a leer o escri**bir.

En el registro **ANSEL** se configuran los puertos analógicos, es buena práctica configurarlos explícitamente para migrar fácilmente.

En el registro **CONFIG** viene por defecto el Watch Dog Timer habilitado (**WDT**, temporizador usado para resetear el microcontrolador y "salvarlo"). Trae por defecto el **MCLRE** configurado en el pin de sólo entrada por defecto. Este registro se encuentra fuera del espacio de memoria del programa y pertenece al espacio de configuración de memoria. Típicamente accesado durante la programación.

Como vamos a trabajar en **C** necesitamos revisar los macros del header (.h) para observar como se configuran estos registros por defecto, pues puede variar según librería como se mapean los espacios de memoria a los macros.


Se puede configurar el **CONFIG** con macros (o pragmas), típicamente estos están definidos en el header del microcontrolador utilizados por el compilador. Se debe revisar la documentación del header, del compilador y la hoja de datos.
En el caso del compilador sdcc se puede definir al principio del código fuente, antes de usar un pin debemos configurarlo y esto se puede hacer bit a bit o todos a la vez:

```C
TRISIO = 0x00;
GPIO = 0x00;
```

Existen varios métodos para escribir registros en C, aunque es posible definir las cosas sobreescribiendo:

```C
TRISIO = 0b00000000;
```

Es más recomendado usar máscaras como:

```C
GPIO &= (0b11111000); // No limpiamos los primeros bits
```

Finalmente luego de configurar el microcontrolador deseamos realizar lógica para leer y escribir, en este momento hay una interfaz real con el mundo, por lo que requerimos entender totalmente y a detalle la hoja de datos en las partes relevantes a la aplicación. Pues por ejemplo si desconocemos y no modelamos carga podemos sobrepasar la corriente máxima de un pin de salida o la máxima tensión que viene en la hoja de datos (no sobrepasar 20mA). Para efectos de prototipado la temperatura no es importante, pero debe ser algo superado para la etapa de un producto final.

####  E/S

Un pin puede estar en Alto, Bajo o Z (no recomendado), por lo que se usan resistencia de pull up y pull down.

En esta configuración sabemos siempre que está en alto o en bajo, usando un switch para forzar el pin al **Vcc** o **Gnd**.

### Current Sinking y rebote

El MC puede funcionar como sink o source, por lo que cuando trabajamos con switches y botones tenemos que filtrar el efecto de rebote para evitar falsas lecturas producto de detalles mecánicos imperceptibles por rebotes en los contactores. Esto es solucionable por hardware (capacitor paralelo a tierra, inductor en serie) o por software (lógica con muestreo).

### Flujo del programa

Se inicializan los periféricos y **MCU**, estableciendo lo modos de operación , configurando registros, iniciando clases, variables etc.

Luego se ejecutan las acciones en el main loop del microcontrolador.

#### RNG

Generar números aleatórios es difícil para un sistema deterministico, en especial uno con pocos recursos, para lograr esta tarea se tienen varias opciones:

- Se generan números aleatórios con una unidad **RNG**.
- Leyendo de convertidores A/D (pines con ruido).
- Con **LFSR** (linear-feedback shift register)
- Algoritmo Blum-Blum-Shub (**BBS**).
- Por software con contadores.

O podemos hacer un **"hack"** contando de cero a cien __muy muy rápido__.

#### Diagrama de flujo

Importante para los laboratorios incluir el diseño del programa en alto nivel.

## Recomendaciones del Laboratorio

- Leer con calma la hoja de datos del **MC**
- Leer documentación de la librería/archivos de header
- Preguntar cualquier duda
- Trabajar desde antes, no a ultima hora.

# Labo 1

Se dan un par de semanas (tentativamente)

Hay que capturar evidencias de que el programa y circuito hacen lo que pide el enunciado. Hay que usar en el simulador los amperímetros y osciloscopios cual laboratorio real.

El entregable es en mediación un .zip conteniendo la carpeta con todo.

La entrega sin el reporte vale cero, este contiene:

- **Portada**
- **Resumen**
- **Nota teórica**: Diagrama de flujo, pines, componentes y precios, al configurar registros y funciones que configuran describirlas, que sea autocontenido el reporte y un estudiante pueda entender todo.
- **Desarrollo**: Explicar el procedimiento y los resultados obtenidos.
- **Conclusiones**: Obligatoriamente en términos de lo obtenido, únicamente.
- **Bibliografía**.
- **Apéndices** : Con las hojas de datos de todas las cosas.

Para el primer lab hacemos un bingo con display de dos dígitos y un botón usando el PIC que venimos hablando de. Un botón de entrada la salida la pantalla de 0 a 99.

