#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * create_array: creates an array of strings
 * @size: size of the array
 * @c: chars
 *
 * return: the string
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = (char *)malloc(size * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	if (s == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	s[i] = '\0';
	return (s);
}
