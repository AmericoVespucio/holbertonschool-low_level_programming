#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
/**
 * struct tipo - Struct tipo
 *
 * @c: the character
 * @f: The function associated
 */
typedef struct print_arguments
{
	char *c;
	void (*f)();
} pa;
int _printf(const char *format, ...);
int print_integer(va_list list);
int _putchar(char c);

#endif