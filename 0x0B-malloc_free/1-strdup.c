#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - man strdup
 * @str: string
 *
 * return: If bigger than size (i) : NULL, if its NULL : NULL
 */

char *_strdup(char *str)
{
	char *new_str;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		new_str = (char *)malloc(i * sizeof(char));
		new_str[i] = str[i];
		if (*str > i)
		{
			return(NULL);
		}
		if (str == NULL)
	        {
			return(NULL);
	        }
        }
	return(0);
}
