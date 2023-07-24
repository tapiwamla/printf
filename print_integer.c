#include "main.h"

/**
 * print_integer - print an int to stdio
 * @n: the int
 * Return: number of chars
 */
int print_integer(int n)
{
unsigned int num;
int iteration;

iteration = 0;
if (n < 0)
{
iteration += character_print('-');
num = -n;
}
else
{
num = n;
}
if (num / 10)
{
iteration += print_integer(num / 10);
}
iteration += character_print((num % 10) + '0');
return (iteration);
}
