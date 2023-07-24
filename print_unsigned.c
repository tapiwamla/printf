#include "main.h"
/**
 * print_unsigned_int - print number.
 * @n: the number to print.
 * Return: number of characters printed.
 */
int print_unsigned_int(unsigned int n)
{
unsigned int divisor = 1, i, digit;
int iteration = 0;

while (n / divisor > 9)
divisor *= 10;

for (i = divisor; i >= 1; i /= 10)
{
digit = (n / i) % 10;
iteration += _putchar(digit + '0');
}

return (iteration);
}

