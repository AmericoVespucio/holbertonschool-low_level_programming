#include "function_pointers.h"
/**
 * array_iterator - execute a function as a parameter in each element
 * @array: array
 * @size: size of the array
 * @action: pointer to the function you need
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i; /* u_int for index, also you can use size_t type*/

	if (array != NULL && size != 0 && action != NULL)
/* If the array is NOT null, the size is NOT 0, and actions is NOT null*/
/* then execute the following lines */
	{
		for (i = 0; i < size; i++)
/* counting from 0 to the size, this will make iterate each action */
		{
			action(array[i]); /* action */
		}
	}
}
