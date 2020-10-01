#include "holberton.h"

/**
 * _strcat - check the code for Holberton School students.
 * @dest: destination
 * @src: source
 * @n: int
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; ++i)
	{
	}
	for (j = 0; j < n && src[j] != '\0'; ++j, ++i)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
