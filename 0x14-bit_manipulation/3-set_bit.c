#include "holberton.h"
/**
 *set_bit -value a bit to 1 at a given index.
 *@n: unsigned long integer
 *@index: index of bit find
 *
 *Return: 1 if it worked, or -1 if an error occurred
 */
	int set_bit(unsigned long int *n, unsigned int index)
{

if (index > sizeof(unsigned long int) * 8 || n == NULL)

	return (-1);

*n |= (1 << index);

return (1);

}
