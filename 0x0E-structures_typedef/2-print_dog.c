#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print the name of a program
 * @d: member
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL) /* If d is NULL print nothing. */
	{
		return;
	}
	if (d->name == NULL) /* if name is NULL, print Name: (nil) */
	{
		printf("Name: (nil)\n");
	}
	else /* If name is not NULL, print name value */
	{
		printf("Name: %s\n", d->name);
	}
	if (d->age == '0') /* If an element of d is NULL */
	{
		printf("Age: (nil)\n");
	}
	else
	{
		printf("Age: %f\n", d->age);
	}
	if (d->owner == NULL) /* If an element of d is NULL */
	{
		printf("Owner: (nil)\n");
	}
	else /* If its not NULL, then print owner name */
	{
		printf("Owner: %s\n", d->owner);
	}
}
