#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - prints buffer in hexa
 * @nmemb: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */

void *_calloc(unsigned int nmemb, unsigned int size)

{
	char *s;
	unsigned int i;

	if (size == 0 || nmemb == 0)
		return (NULL);
/* If nmemb or size is 0, then _calloc returns NULL */
	s = malloc(nmemb * size);
/* The _calloc function allocates memory for */
/* an array of nmemb elements of size */
	if (s == NULL)
		return (NULL);
/* If malloc fails, then _calloc returns NULL */
	for (i = 0; i < (nmemb * size); i++)
	{
		s[i] = 0;
	}
/* The memory is set to zero */
	return (s);
/* Returns a pointer to the allocated memory */
}
