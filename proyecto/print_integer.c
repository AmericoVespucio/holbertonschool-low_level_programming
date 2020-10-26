#include "holberton.h"
/**
 * int_print - Print integers when incoked
 * @args: argument entered to print
 * Return: amount of integers printed
 */
int int_print(va_list args)
{

	long int num, div, i = 0;

	num = va_arg(args, int);

	if (num == 0)
	{
		_putchar('0');
		i = 1;
	}
	else if (num < 0)
	{
		_putchar('-');
		num = -num;
		i = 1;
	}
	if (num > 0)
	{
		for (div = 1; div <= num; div *= 10)
			;
		while (div > 1)
		{
			div /= 10;
			_putchar((num / div) + '0');
			num %= div;
			i++;
		}
	}
	return (i);
}
