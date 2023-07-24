#include "main.h"

/**
 * print_octal - print number as octal
 * @n: the number
 * Return: total digits printed
 */

int print_octal(unsigned int n)
{
int count;

count = 0;

if (n / 8)
{
count += print_octal(n / 8);
}
count += _putchar((n % 8) + '0');

return (count);
}

