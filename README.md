# Sistema de Calificaciones Escolares en C

## Descripción

Este proyecto consiste en un programa desarrollado en lenguaje C que permite registrar el nombre de un estudiante y sus tres calificaciones. El sistema calcula el promedio final y determina si el estudiante aprobó o reprobó.

Se considera una calificación mínima aprobatoria de 6.0 en una escala de 0 a 10.

## Objetivo

Desarrollar un programa que permita practicar operaciones aritméticas, entrada y salida de datos, estructuras condicionales y validación de información mediante el lenguaje C.

## Características

* Solicita el nombre del estudiante.
* Permite ingresar tres calificaciones.
* Valida que las calificaciones estén entre 0 y 10.
* Calcula automáticamente el promedio final.
* Determina si el estudiante aprobó o reprobó.
* Muestra los resultados de forma organizada.

## Tecnologías utilizadas

* Lenguaje C.
* Compilador GCC.
* Terminal o consola de comandos.

## Código fuente

El programa utiliza los siguientes elementos:

* `printf()`: muestra información en pantalla.
* `scanf()`: recibe los datos ingresados por el usuario.
* Variables `char`: almacenan el nombre del estudiante.
* Variables `float`: almacenan las calificaciones y el promedio.
* `if` y `else`: determinan el resultado académico.
* Operadores lógicos: validan el rango de las calificaciones.
* Operaciones aritméticas: calculan el promedio final.

## Compilación y ejecución

### 1. Compilar el programa

```bash
gcc sistema_calificaciones.c -o sistema_calificaciones
```

### 2. Ejecutar en Windows

```powershell
.\sistema_calificaciones.exe
```

### 3. Ejecutar en Linux

```bash
./sistema_calificaciones
```

## Ejemplo de salida

```text
Ingresa el nombre del estudiante: Carlos Perez
Ingresa la primera calificacion: 8
Ingresa la segunda calificacion: 9
Ingresa la tercera calificacion: 7

========== RESULTADOS ==========
Estudiante: Carlos Perez
Primera calificacion: 8.00
Segunda calificacion: 9.00
Tercera calificacion: 7.00
Promedio final: 8.00
Estado: APROBADO
================================
```

## Conocimientos aplicados

* Fundamentos del lenguaje C.
* Declaración y uso de variables.
* Tipos de datos.
* Entrada y salida de información.
* Operaciones aritméticas.
* Estructuras condicionales.
* Operadores lógicos.
* Validación de datos.
