#include "holberton.h"
/**
 * swap_int - Swap Integers
 * @a: 1
 * @b: 2
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
