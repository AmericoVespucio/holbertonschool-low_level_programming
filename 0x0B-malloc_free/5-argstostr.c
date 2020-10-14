#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all arguments of the program into a string
 * @ac: argcount
 * @av: argv.
 *
 * Return: NULL or SUCESS
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int args, size, index, argc = ac;

	if (ac == 0 || av == NULL)
		return (NULL);
