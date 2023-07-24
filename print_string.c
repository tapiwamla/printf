#include "main.h"
/**
 * string_print - print a string to stdio
 * @str: the string
 * Return: characters (n)
 */
int string_print(char *str)
{
int len = 0;

if (str == NULL)
{
return (write(1, "(null)", 6));
}

while (*str)
{
len += write(1, str, 1);
str++;
}
return (len);
}
