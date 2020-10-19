#include "dog.h"
#include <stdio.h>

/**
 * init_dog - cointain initializing pointers to the struct
 * @d: pointer to structure
 * @name: pointer to the value of the name of the dog
 * @age: pointer to the value of the age of the dog
 * @owner: pointer to the value of the owner of the dog
 *
 * Write a function that initialize a variable of type struct dog
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
