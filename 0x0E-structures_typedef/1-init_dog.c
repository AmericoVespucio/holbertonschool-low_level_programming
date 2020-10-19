#include <stdio.h>
#include "dog.h"

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
	if (d != NULL) /* If d is not NULL */
	{ /* We derreference d pointer to name             */
	  /* and we asign the value of name to the pointer */
		d->name = name;
		d->age = age;
		d->owner = owner;
/* We also do it with age and owner */
	}
}
