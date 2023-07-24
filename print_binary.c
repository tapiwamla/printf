#include "main.h"

/**
 * print_binary - convert int to binary
 * @n: int to convert
 * Return: binary result
 */

int print_binary(unsigned int n)
{
int iteration;

iteration = 0;

if (n > 1)
{
iteration += print_binary(n >> 1);
}
iteration += character_print((n & 1) + '0');

return (iteration);
}
