#include "main.h"

/**
 * print_S - prints a string
 * @str: string to input
 * Return: input string
 */

int print_S(char *str)
{
int iteration;

iteration = 0;

if (str == NULL)
{
return (-1);
}
while (*str != '\0')
{
if (*str == '\n')
{
iteration += _putchar('\\') + _putchar('x') +
_putchar('0') + _putchar('A');
} else if (*str < 32 || *str >= 127)
{
iteration += _putchar('\\');
iteration += _putchar('x');
iteration += print_hex(*str, 1);
} else
{
iteration += _putchar(*str);
}
str++;
}
return (iteration);
}

