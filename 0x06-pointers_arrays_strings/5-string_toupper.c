#include "holberton.h"

/**
 **string_toupper - check lowercase.
 *@s: s
 *
 * Return: Always 0.
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] <= 'a' && s[i] >= 'z')
		{
			s[i] = s[i] - ' ';
			i++;
		}
	}
	return (s[i])
		}
