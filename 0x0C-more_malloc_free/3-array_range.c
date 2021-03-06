#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - prints buffer in hexa
 * @min: the address of memory to print
 * @max: the size of the memory to print
 *
 * Return: Nothing.
 */


int *array_range(int min, int max)
{
	int *s;
	int i;

	if (min > max)
		return (NULL);

/* If min > max, return NULL */

	s = malloc(((max - min) + 1) * sizeof(int));

/*it asks to go from min to max including both*/

	if (s == NULL)
		return (NULL);

/* If malloc fails, return NULL */

	for (i = 0; i <= (max - min); i++)
	{
		s[i] = min + i; /*i moves from min */
	}
	return (s);
}
