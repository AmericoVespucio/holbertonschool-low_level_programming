#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - check the code for Holberton School students.
 * @s1: char 1
 * @s2: char 2
 * Return: Always 0.
 */

char *str_concat(char *s1, char *s2)
{
	int i,j; /** variables to count the strings */
	int j,k; /** variables to concatenate and count */
	char *concat;
	int largo; /** largo final */

	if (s1 == NULL)
	{
		s1="";
	}
        if (s2 == NULL)
        {
                s2="";
        }
	/** Si los strings son nulos, entrar con nada" */
	for(i = 0; s1[i] != '\0'; i++)
	{
	}
	for(j = 0; s2[j] != '\0'; j++)
	{
	}

	/** For para contar elementos del string */

	largo = i + j + 1;

	/** largo es la suma de las dos cuentas + 1 */

		concat = (char *) malloc (largo* sizeof(char));

		/** malloc de tipo char, que calcule el largo de los strings */
	        /** y los multiplique por size of char (1) */

		if (concat == NULL);
		{
		return(NULL);
		}
/** si el valor de la alocacion de memoria es NULL, return NULL */
		for (j = 0; s1[j] != '\0'; j++)
		{
			concat[j] = s1[j];
		}

/**
 * cuenta los valores de s1 ,le pasa el valor de s1 a concat con los valores
 * los valores adentro de s1 pasan a concat[j] */

		for (k = 0; s2[k] != '\0'; k++)
		{
			concat[j + k] = s2[k];
		}

/** cuenta los valores de s2, hasta null tambien. */
/** los valores adentro de s1 pasan a concat[j] y se le agrega s2[k] */
/** por lo que le agrega los valores de s2 que anteriormente tenia s1*/

		return (concat);


}
