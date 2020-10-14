#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - duplicate string
 * @str: pointer to str
 *Return: return pointer to malloc
 */

char *_strdup(char *str)
{
	char *s; /** Nuevo puntero, para usar malloc */
	int i; /** Indexador */
	int size = 0; /** Toma el valor del primer loop y lo guarda en size*/

	if (str == NULL) /** Checkea si str es null, si no es, continua */
	{
		return (NULL);
	}

	for (i = 0; str[i] != 0; i++) /** Cuenta lugares del string s */
	{
		size++; /** Almacena lugares en size */
	}

	s = malloc(sizeof(char) * size + 1);
	/** Iguala s a la alocacion de memoria malloc, +1 para contar el null */
	if (s == NULL)
	{
		return (NULL);
	}
	/** Si el nuevo puntero resulta en un null, return null */
	for (i = 0; i < size; i++)
	{
		s[i] = str[i];
	}
/** cuenta hasta size, copia el contenido de str a nuevo puntero en */
/** la nueva direccion de memoria */
	return (s);
}
