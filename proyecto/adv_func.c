#include "holberton.h"

/**
 * print_uint - main function
 * @list: The argument pointer.
 *
 * Description: This function prints a unsigned int.
 *
 * Return: 0.
 */
int print_uint(va_list list)
{
	unsigned int i, p, r;
	unsigned int n = va_arg(list, int), count = 0;

	i = n;
	p = 1;
	r = i;

	while (r > 9)
	{
		p *= 10;
		r /= 10;
	}

	for (; p >= 1; p /= 10)
	{
		_putchar(((i / p) % 10) + '0');
		count++;
	}
	return (count);
}
