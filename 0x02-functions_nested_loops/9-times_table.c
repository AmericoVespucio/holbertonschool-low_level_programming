#include "holberton.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: nothing
 */
void times_table(void)
{
	int valor, multiplicacion, resto;

	for (valor = 0; valor <= 9; valor++)
	{
		for (multiplicacion = 0; multiplicacion <= 9; multiplicacion++)
		{
			resto = valor * multiplicacion;
			if (multiplicacion == 0)
			{
				_putchar(resto + '0');
			}
			else if (resto <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(resto + '0');
			}
			else if (resto >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(resto / 10 + '0');
				_putchar(resto % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
