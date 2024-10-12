# Libft

Libft is a custom library written in **C** as part of the **42 School curriculum**. It replicates standard C library functions and introduces additional utility functions, while also integrating two other 42 School projects, **get_next_line** and **ft_printf**. The library is compiled using a Makefile that includes all the necessary flags, making it easy to integrate into other projects.

## Table of Contents
- [Project Description](#project-description)
- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Why Create a Custom Library?](#why-create-a-custom-library)
- [Authors](#authors)

## Project Description

Libft is a collection of functions that replicate the behavior of standard C library functions, alongside additional utility functions such as string and memory manipulation, and linked list operations. It also includes **get_next_line** for reading from file descriptors and **ft_printf** as a custom implementation of the `printf` function.

The provided Makefile will handle the compilation of the library into a static library (`libft.a`). There is no `main` function for direct testing, but the library can be integrated into your own projects. A `main` function will be added soon to facilitate testing.

## Features

- **Standard C library functions**: `ft_strlen`, `ft_strcpy`, `ft_atoi`, `ft_memset`, etc.
- **Memory manipulation functions**: `ft_memcpy`, `ft_bzero`, `ft_memmove`, etc.
- **String manipulation functions**: `ft_strjoin`, `ft_substr`, `ft_strncmp`, etc.
- **Linked list utility functions**: `ft_lstnew`, `ft_lstadd_front`, `ft_lstclear`, etc.
- **get_next_line**: Reads a line from a file descriptor.
- **ft_printf**: Custom implementation of `printf`, supporting basic formatting.

## Installation

To compile the library, clone the repository and run the Makefile:

```bash
git clone https://github.com/username/libft.git
cd libft
make
```

## Usage
```bash
gcc -Wall -Wextra -Werror -o your_program your_program.c -L. -lft
```

This command links the libft.a static library to your project. You can use any of the libft, get_next_line, and ft_printf functions in your code by including the libft.h header file:
```bash
#include "libft.h"
```

## Why Create a Custom Library?
A custom library, such as Libft, allows developers to have a set of reusable functions that are commonly needed in multiple projects. Instead of rewriting standard functions for every project, you can include your own optimized implementations.

Real-World Use Cases:
Efficiency and Customization: Developers create custom libraries when they need specialized behavior or more control over the functions than what is provided by standard libraries.
Code Reusability: If you frequently use certain utility functions (like string or memory operations), a custom library lets you package them into one place for easy access across projects.
Collaboration: In larger projects, teams can develop libraries for specific purposes (e.g., handling HTTP requests, mathematical operations) that are then used by other developers working on different parts of the application.

