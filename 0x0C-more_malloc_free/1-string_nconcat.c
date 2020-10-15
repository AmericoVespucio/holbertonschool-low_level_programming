#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - check the code for Holberton School students.
 * @s1: string 1
 * @s2: string 2
 * @n: int received
 * Return: Always 0.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j; /* Contador */
	char *s; /* String */
	unsigned int x, y; /* Concatenar */

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
/* if NULL is passed, treat it as an empty string */
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0' && j < n; j++)
	{
	}
/* If n is greater or equal to the length of s2 then use the entire string s2 */


	s = malloc(sizeof(char) * (i + j) + 1);
/* Asignation of malloc, of char (1 byte) * position of i + j + 1 (to include NULL) */
	if (s == NULL)
		return (NULL);
	/* If the function fails, it should return NULL */
	for (x = 0; s1[x]; x++)
	{
		s[x] = s1[x];
	}
/* "Copy" the s1 content into s1 */
	for (y = 0; s2[y] && y < n; y++)
	{
		s[x + y] = s2[y];
	}
/* Concatenates the last 2 strings in pointer string s */
	
	s[x + y] = '\0'; 
/* to add null zero at the end manually */
	return (s);
}
