#include "holberton.h"

/**
 * puts_half - prints half a string
 * @str: character
 */
void puts_half(char *str)
{
	int h;

	for (h = 0; str[h] != '\0'; h++)
	{
		h = h + 1;
	}

	for (h = h / 2; str[h] != '\0'; h++)

	{
		_putchar(str[h]);
	}
	_putchar('\n');
}
