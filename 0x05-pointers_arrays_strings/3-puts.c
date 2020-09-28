#include "holberton.h"

/**
 * _puts - check the code for Holberton School students.
 * @str: string
 * Return: Always 0.
 */

void _puts(char *str)
{

	int cuenta;

	for (cuenta = 0; str[cuenta] != '\0'; cuenta++)
	{
		_putchar(str[cuenta]);
	}
	_putchar('\n');

}
