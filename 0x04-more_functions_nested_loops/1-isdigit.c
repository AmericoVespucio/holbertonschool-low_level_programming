#include "holberton.h"

/**
 * _isupper - check the code for Holberton School students.
 * @c : feliz cumple roberto y javier
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
