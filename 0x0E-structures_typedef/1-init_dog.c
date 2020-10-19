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
 * If d is not 0 (NULL), then make d point to name (in this case)
 * , or age, or owner, then, asign it to the value it points
 *
 * Example - d now points to position of name, and then asign it to
 * name value (wich needs to be in another function)
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
