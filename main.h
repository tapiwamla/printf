#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>

/* print according to a certain format */
int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list args);
int print_str(va_list args);
int print_percent(va_list args);

/* print binary */
int print_binary(unsigned int n);

/* print a character */
int character_print(char c);

/* print a string */
int string_print(char *str);

/* print a percent sign */
int percent_print(void);
int specifier_r(va_list args);

/* print an integer */
int print_integer(int n);

/* print a pointer in hexadecimal format */
int  print_pointer(void *ptr);

/* print an unsigned long integer in hexadecimal format */
int print_hex(unsigned long int n, int uppercase);

/* print unsigned integer */
int print_unsigned_int(unsigned int n);

/* prints octal */
int print_octal(unsigned int n);

/* custom String specifier */
int print_S(char *str);

/* prints a strinf in reverse */
int print_reversed(char *str);

#endif
