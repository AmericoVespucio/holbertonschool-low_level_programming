#include "holberton.h"

/**
 * _strcat - check the code for Holberton School students.
 * @dest: destination
 * @src: source
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;
	int largo;

	for (i = 0; dest[i] != '\0'; ++i)
	{
	}
	for (j = 0; src[j] != '\0'; ++j)
	{
	}
	for (largo = 0; largo != i; ++largo)
	{
		dest[i] = src[j];
		++largo;
	}
	dest[largo + 1] = '\0';
	return (dest);
}
