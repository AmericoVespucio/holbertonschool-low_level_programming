#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - print strings
 * @n: n arguments
 * @separator: characters as separator
 *
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *str;
	unsigned int i;

	if (separator == NULL)
	{
		separator = "";
	}
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str != '\0')
		{
			printf("%s", str);
		}
		else
			printf("(nil)");
		if (i != n - 1)
			printf("%s", separator);
	}
	va_end(args);
	putchar('\n');
}
