#include "main.h"

/**
 * handle_specifier - handles character specifiers
 * @specifier: the specifier character
 * @args: the list of arguments
 * Return: the total number of characters printed
 */
int handle_specifier(char specifier, va_list args)
{
switch (specifier)
{
case 'c':
return (character_print(va_arg(args, int)));
case 's':
return (string_print(va_arg(args, char *)));
case '%':
return (percent_print());
case 'b':
return (print_binary(va_arg(args, unsigned int)));
case 'd':
case 'i':
return (print_integer(va_arg(args, int)));
case 'p':
return (print_pointer(va_arg(args, void *)));
case 'u':
return (print_unsigned_int(va_arg(args, unsigned int)));
case 'o':
return (print_octal(va_arg(args, unsigned int)));
case 'x':
return (print_hex(va_arg(args, unsigned long int), 0));
case 'X':
return (print_hex(va_arg(args, unsigned long int), 1));
case 'S':
return (print_S(va_arg(args, char *)));
default:
return (character_print('%') + character_print(specifier));
}
}

/**
 * _printf - print the output according to a format
 * @format: the string format
 * Return: the total number of characters printed
 */
int _printf(const char *format, ...)
{
va_list	args;
int iteration, i;

iteration = 0, i = 0;
if (format == NULL)
{
return (-1);
}
va_start(args, format);
while (format[i] != '\0')
{
if (format[i] == '%')
{
i++;
iteration += handle_specifier(format[i], args);
}
else
iteration += character_print(format[i]);
i++;
}
va_end(args);
return (iteration);
}

