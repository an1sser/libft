*This project has been created as part of
the 42 curriculum by adel (n)*

📚 Libft - @42Network
📝 Overview

Libft is the first project at 42 school, where the goal is to re-code a set of standard C library functions, along with additional utility functions that will be used throughout the curriculum. Understanding these functions at a low level is crucial for mastering memory management and data structures in C.
🛠️ Features

The library is divided into three main sections:
1. Libc Functions

Standard functions from <ctype.h>, <string.h>, and <stdlib.h>:

    Character Checks: ft_isalpha, ft_isdigit, ft_isalnum, ft_isascii, ft_isprint.

    String Manipulation: ft_strlen, ft_strchr, ft_strrchr, ft_strncmp, ft_strnstr, ft_strdup, ft_strlcpy, ft_strlcat.

    Memory Management: ft_memset, ft_bzero, ft_memcpy, ft_memmove, ft_memchr, ft_memcmp, ft_calloc.

    Conversions: ft_toupper, ft_tolower, ft_atoi.

2. Additional Functions

Non-standard functions that are highly useful for string and memory manipulation:

    String Creation: ft_substr, ft_strjoin, ft_strtrim, ft_split, ft_strmapi, ft_striteri.

    Number Conversion: ft_itoa.

    File Descriptor Output: ft_putchar_fd, ft_putstr_fd, ft_putendl_fd, ft_putnbr_fd.

3. Functions (Linked Lists) 🚀

Functions to manipulate singly linked lists using the t_list structure:

    ft_lstnew, ft_lstadd_front, ft_lstsize, ft_lstlast, ft_lstadd_back, ft_lstdelone, ft_lstclear, ft_lstiter, ft_lstmap.

🚀 Getting Started
Prerequisites

You need a C compiler (like cc or gcc) and Make installed on your system.
Installation

Clone the repository and compile the library:
Bash

git clone (repository)
cd libft
make

This will generate the libft.a static library file.
📖 Usage

To use the library in your code, include the header file:
C

#include "libft.h"

When compiling your project, link the library:
Bash

cc main.c -L. -lft

🛠️ Makefile Commands
Command	Description
make	Compiles the mandatory functions into libft.a.
make clean	Removes all object (.o) files.
make fclean	Removes object files and the libft.a library.
make re	Performs a full re-compile (fclean + make).
👨‍💻 Author

ADEL NASSER (esamn11111@gmail.com)

42 Student

Note: This library follows the Norme of 42 Network.

Note: This is the latest version of the libft project 2026/1/1 
