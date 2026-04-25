# Makefiles

## Descripción

Este proyecto tiene como finalidad analizar y comprender el uso de Makefiles como herramienta para automatizar procesos en el desarrollo de software.
En esta tarea se trabajó con dos ejemplos los cuales fueron: (`ejemplo-basico` y `julia`) y se desarrolló un proyecto propio que implementa un Makefile para automatizar la generación de una imagen.

---

## Objetivo

Comprender el funcionamiento de los Makefiles como herramienta de automatización en el desarrollo de software, mediante el análisis de ejemplos prácticos y la implementación de un proyecto propio.

---

## Marco teórico

Un Makefile es un archivo de texto utilizado por la herramienta `make` para automatizar procesos dentro del desarrollo de software, principalmente la compilación de programas. Su función principal es definir cómo se deben generar ciertos archivos a partir de otros, permitiendo ejecutar múltiples comandos mediante una sola instrucción.
El funcionamiento de un Makefile esta basado en reglas, las cuales están compuestas por tres elementos principales:

* **Objetivo (target):** es el resultado que se desea obtener, como un archivo ejecutable o una acción.
* **Dependencias (prerequisites):** son los archivos necesarios para generar el objetivo.
* **Comandos (recipes):** son las instrucciones que se ejecutan para construir el objetivo.

La estructura general de una regla es:
target: dependencias
comando

Cuando se ejecuta el comando `make`, el sistema analiza las dependencias y determina qué partes del programa necesitan actualizarse. Esto permite que solo se recompilen los archivos modificados, optimizando el tiempo de ejecución y evitando procesos innecesarios.
Además, los Makefiles utilizan diversos elementos que facilitan su uso:

* **Variables:** permiten reutilizar valores como el compilador (`CC = gcc`) o las opciones de compilación (`CFLAGS`), haciendo el código más flexible y fácil de mantener.
* **Reglas patrón:** permiten generalizar procesos, por ejemplo, convertir automáticamente archivos `.c` en `.o` mediante expresiones como `%.o: %.c`.
* **Objetivos ficticios (.PHONY):** representan acciones y no archivos reales, como `clean` o `run`, asegurando que siempre se ejecuten cuando se solicitan.

El uso de Makefiles nos ofrece múltiples ventajas,como la automatización de tareas repetitivas, la reducción de errores humanos, la optimización del tiempo de compilación y la organización del proyecto. Por lo tanto, podemos decir que los Makefiles son una herramienta fundamental en el desarrollo de software, ya que nos permiten estandarizar procesos, mejorar la eficiencia y facilitar el trabajo en proyectos colaborativos.


---

## Desarrollo

### ejemplo-básico
En esta parte se analizó un programa en C que imprime mensajes en pantalla y en donde el Makefile automatiza la compilación y ejecución del programa.

**Comandos que se usaron:**
```bash
cd ejemplo-basico
make
make run
```

---

### julia
Se trabajó con un programa en C++ que genera datos matemáticos de un fractal que es el conjunto de Julia.
El flujo que sigue el programa es:
1. El programa genera un archivo `.txt` con datos
2. Gnuplot convierte esos datos en una imagen
3. El Makefile automatiza el proceso

**Comandos que se usaron:**
```bash
cd julia
make julia
./julia
gnuplot julia_set.gp
```

---

### Proyecto propio
Se desarrolló un programa en C (`ondas.c`) que genera una imagen en formato BMP con un patrón de ondas.
El programa:
* Define dimensiones de la imagen (800x800)
* Calcula valores de color usando funciones seno y coseno
* Genera una imagen en formato BMP

El Makefile es el que permite automatizar el flujo de trabajo.

**Comandos que se usaron:**

```bash
cd proyecto-propio
make
make run
make clean
```

---

##  Resultados
* El ejemplo básico se ejecutó correctamente mostrando mensajes en consola.
* El ejemplo Julia generó una imagen del fractal (`julia_set.png`).
* El proyecto propio generó una imagen (`ondas.bmp`) con un patrón de ondas.

Esto demuestra que el uso de Makefiles permite automatizar procesos de manera eficiente.

---

## Conclusión
El uso de Makefiles nos facilita la automatización de tareas en el desarrollo de software, lo que nos permite compilar, ejecutar y organizar proyectos de forma eficiente.
A través de los ejemplos analizados y el proyecto desarrollado, se pudo comprobar que los Makefiles reducen errores, optimizan el tiempo de trabajo y estandarizan los procesos, lo que termina siendo una herramienta fundamental en proyectos de programación.

---

## Realizado por:
Kendra Lizeth Torres Gómez
6CM3
