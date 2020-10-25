#include "holberton.h"
#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * _strlen - Entry point
 * @s: int
 * Return: void (Success)
 */
int _strlen(char *s)
{
	int n, len;

	n = len = 0;
	while (*(s + n) != '\0')
	{
		n++;
		len++;
	}
	return (len);
}

/**
 *
 */
void print_char(va_list list)
{
	char c;

	c = va_arg(list, int);
	write (1, &c, 1);
}

/**
 *
 */
void print_string(va_list list)
{
	char *tmp;
	int n;

	tmp = va_arg(list, char *);
	n = _strlen(tmp);
	write(1, tmp, n);
}

/**
 * print_number - print an int numbers.
 * @va: number tested
 * Return: Always 0.
 */


int _printf(const char *format, ...)
{
	pa type[] = {
		{"c", print_char},
		{"s", print_string},
        {"i", print_integer},
        {"d", print_integer},
		{NULL, NULL}
	};
	int i = 0, j, c;
	va_list list;

	va_start(list, format);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			j = 0;
			i++;
			while (j < 2)
			{
				if (type[j].c[0] == format[i])
				{
					type[j].f(list);
					break;
                    
				}
				j++;
			}
			i++;
		}
		else
		{
			c = format[i];
			write(1, &c, 1);
			i++;
		}
	}
	va_end(list);
	return (0);
}
