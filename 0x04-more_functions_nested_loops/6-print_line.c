#include "holberton.h"

/**
 * print_line - check the code for Holberton School students.
 * @n: line
 * Return: Always 0.
 */

void print_line(int n)
{
	if (n < 0)
	{
		for (n = n; n > 0; n--)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
