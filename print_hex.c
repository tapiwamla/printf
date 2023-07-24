#include "main.h"

/**
 * print_hex - prints a number in hex
 * @n: number to be printed
 * @uppercase: uppercase chars
 * Return: hex chars
 */

int print_hex(unsigned long int n, int uppercase)
{
char hexadecimals[] = "0123456789abcdef";
int count = 0;

if (n / 16)
{
count += print_hex(n / 16, uppercase);
}
if (uppercase)
{
count += _putchar(hexadecimals[n % 16] - 32 * (n % 16 > 9));
}
else
{
count += _putchar(hexadecimals[n % 16]);
}

return (count);
}

