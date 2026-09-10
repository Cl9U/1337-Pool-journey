==========================================================================================
Assignment name  : ft_printf_simple
Expected files   : ft_printf_simple.c
Allowed functions: write, va_start, va_arg, va_end, malloc, free
------------------------------------------------------------------------------------------

Write a simplified version of printf that handles the following conversions:
  %s - print a string
  %d - print a decimal (base 10) integer
  %x - print a hexadecimal (base 16) lowercase integer

Your function must return the total number of characters printed.

Your function must be declared as follows:

int	ft_printf_simple(const char *format, ...);

Example:

ft_printf_simple("Hello %s, you are %d years old!\n", "world", 42);
// prints: Hello world, you are 42 years old!
ft_printf_simple("Hex: %x\n", 255);
// prints: Hex: ff
==========================================================================================