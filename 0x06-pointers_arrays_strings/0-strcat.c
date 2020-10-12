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


	for (i = 0; src[i] != '\0'; ++j, ++i)
	{
		dest[j] = src[i];
	}
	dest[j] = '\0';
	return (dest);
}
