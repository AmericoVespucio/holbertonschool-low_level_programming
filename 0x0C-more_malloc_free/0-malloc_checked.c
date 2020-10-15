#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates the memory and returns the pointer address
 * @b: unsigned int
 * Return: pointer (Success)
 */

void *malloc_checked(unsigned int b)
{
/*
 * sea unsigned int bel valor de la memoria que se quiere asignar, basado
 * en el valor que se le asigne en otra funcion (ej main) siempre que sea
 * llamada.
 * ejemplos de uso:
 * c = malloc_checked(sizeof(char) * 1024)
 * output - seria la direccion del puntero de la memoria anteriormente asignada
 */
	void *a;
/** Declaro variable tipo void para alocar memoria */
	a = malloc(b);
/** Var a la igualo al tamaño de entrada de b */
	if (a == NULL)
	{
		exit(98);
	}
/** Si a se pasa de memoria, o entra null, */
/* terminar el programa con status 98 */
	return (a);
/* retorna la direccion del pointer de a */
}
