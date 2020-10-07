#include "holberton.h"
/**
 * _puts_recursion - Entry point
 * @s: char
 * Return: void (Success)
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	_putchar(*s);
	_puts_recursion(++s);
}
