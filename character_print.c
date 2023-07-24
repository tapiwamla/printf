#include <unistd.h>

/**
 * character_print - prints a character to stdio
 * @c: the character to print
 * Return: 1 (success), -1 (fail)
 */
int character_print(char c)
{
return (write(1, &c, 1));
}

