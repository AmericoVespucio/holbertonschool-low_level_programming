#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - check the code for Holberton School students.
 * @s: int pinter to be determined.
 * Return: 0 or 1.
 */
 
 	int _strlen(char *s)
	{
		int i;

		for (i = 0; s[i] != '\0'; i++)
		{
		}
		return (i);
	}

/**
 * _strdup - check the code for Holberton School students.
 * @str: char pointer to be determined.
 * Return: char.
 */

char *_strdup(char *str)
{
	int x, i;
	char *array;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		x = _strlen(str);
		array = malloc(x * sizeof(char) + 1);
		if (array == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < x; i++)
		{
			array[i] = str[i];
		}
		array[i++] = '\0';
	}
	return (array);
}
