#include "main.h"
/**
 * percent_print - prints '%' to stdio
 * Return: void (nothing)
 */
int percent_print(void)
{
return (write(1, "%", 1));
}
