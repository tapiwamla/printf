#include "main.h"

/**
 * print_pointer - show ptr value
 * @ptr: ptr value
 * Return: ptr value
 */

int print_pointer(void *ptr)
{
unsigned long int address = (unsigned long int)ptr;
int count = 0;

if (ptr == NULL)
{
return (-1);
}

count += _putchar('0');
count += _putchar('x');
count += print_hex(address, 0);

return (count);
}
