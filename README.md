# ft_printf

A custom implementation of `printf` developed as part of the 42 curriculum.
This project consists of rebuilding a simplified version of the standard `printf` function, with support for a defined set of format specifiers and variadic arguments.

`ft_printf` was designed to strengthen core C skills around formatted output, function decomposition, and argument handling with variadic functions.

## Features
- Reimplementation of a simplified `printf`
- Support for variadic arguments through `stdarg.h`
- Handling of the mandatory 42 format specifiers
- Static library build with `make`

## Project structure
- `ft_printf.h` — header file with function prototypes
- `ft_printf.c` — main formatted output dispatcher
- `ft_putchar.c` — character output helper
- `ft_putstr.c` — string output helper
- `ft_putnbr.c` — signed integer output helper
- `ft_puthex.c` — hexadecimal output helper
- `ft_putptr.c` — pointer output helper
- `Makefile` — builds the `libftprintf.a` static library

## Mandatory part
The project reproduces the core behavior of `printf` for the mandatory conversions required by the subject.

### Main function
- `ft_printf` — parses the format string, reads variadic arguments, dispatches each conversion, and returns the total number of printed characters

### Supported conversions
- `%c` — prints a single character
- `%s` — prints a string
- `%p` — prints a pointer address in hexadecimal form
- `%d` — prints a signed decimal number
- `%i` — prints an integer in base 10
- `%u` — prints an unsigned decimal number
- `%x` — prints a hexadecimal number using lowercase letters
- `%X` — prints a hexadecimal number using uppercase letters
- `%%` — prints a literal percent sign

### Helper functions
- `ft_putchar` — writes one character and returns the number of printed characters
- `ft_putstr` — writes a string and returns the number of printed characters
- `ft_putnbr` — writes a signed number and returns the printed length
- `ft_puthex` — writes a number in hexadecimal format and returns the printed length
- `ft_putptr` — writes a pointer value in hexadecimal format and returns the printed length

## Build
Build the library:
```bash
make
```

Clean object files:
```bash
make clean
```

Remove object files and library:
```bash
make fclean
```

Rebuild everything:
```bash
make re
```

## Output
The project builds a static library:

```bash
libftprintf.a
```

This library can then be linked into other C projects.

## Learning outcomes
This project was an introduction to variadic functions and formatted output in C.
It helped build solid foundations in:
- variadic argument handling with `va_start`, `va_arg`, and `va_end`
- output formatting logic
- recursive or decomposed number printing
- hexadecimal conversion
- return value tracking
- modular code organization
