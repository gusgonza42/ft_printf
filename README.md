<div align="center">
<h1>ft_printf</h1>
<img src="https://raw.githubusercontent.com/gusgonza42/my-utils-gusgonza/main/ft_badges_42/badge_01_ft_printf_500px.png" style="width: 150px; height: 150px;">

[![Build Status](https://img.shields.io/static/v1?label=Build%20Status&message=Success&color=brightgreen)](https://github.com/gusgonaz42/ft_printf)

</div>


## 💡 Acerca del Proyecto

> _El objetivo de este proyecto es implementar una función `printf` simplificada, capaz de manejar conversiones básicas como caracteres, cadenas de caracteres, números enteros y punteros._

Este proyecto te permitirá comprender cómo funciona la función `printf` en C, cómo manejar diferentes especificadores de formato y cómo gestionar la impresión en la consola. Es crucial para entender la gestión de cadenas de formato y la manipulación de argumentos variables en C.

Para obtener información detallada sobre los requisitos obligatorios del proyecto, consulta el [**Subject**](https://github.com/gusgonza42/ft_printf/blob/main/ft_printf-es.subject.pdf).

## 🛠️ Uso

### Requisitos

El proyecto está escrito en lenguaje C y requiere el compilador **gcc** y las **bibliotecas estándar de C** para funcionar correctamente.

### Instrucciones

**1. Uso en tu código**

Para utilizar `ft_printf` en tu código, incluye su encabezado en tus archivos de código fuente:

```C
#include "ft_printf.h"
```

Asegúrate de que todos los archivos necesarios estén incluidos en tu compilación con las FLAGS necesarias.

## 📋 Ejemplos de Uso

Puedes utilizar `ft_printf` de manera similar a `printf` estándar:

```C
#include "ft_printf.h"

int main() {
    ft_printf("Hola, %s! El número es %d.\n", "mundo", 42);
    return 0;
}
```

Compila tu programa como lo harías normalmente con `gcc`:

```shell
gcc -Wall -Wextra -Werror tu_programa.c libftprintf.a -o programa
```

Ejecuta tu programa compilado:

```shell
./programa
```

