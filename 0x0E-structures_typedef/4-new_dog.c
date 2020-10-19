#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - Check the lenght of a desired string
 * @s: String, while i will take the value of the last string position
 * Return: The lenght of the string
 */

int _strlen(char *s)
{

	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	return (i);
}

/**
 * _strdup - Duplicate a string
 * @str: char pointer to be determined.
 * Return: The array copied.
 */

char *_strdup(char *str)
{
	int x, i;
	char *array;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		x = _strlen(str);
		array = malloc(x * sizeof(char) + 1);
		if (array == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < x; i++)
		{
			array[i] = str[i];
		}
		array[i++] = '\0';
	}
	return (array);
}

/**
 * new_dog - Short description
 * @name: First member
 * @age: Second member
 * @owner: third member.
 * Return: struct.
 * Description: Longer description
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *new_name, *new_owner;

	if (name == NULL || owner == NULL)
/* Return NULL if the function fails */
	{
		return (NULL);
	}
	new_dog = malloc(sizeof(struct dog));
/* We allocate the needed dynamic memory of the dog structure */
	if (new_dog == NULL)
	{
		return (NULL);
	}
/* Return NULL if the function fails */
	new_name = _strdup(name);
/* We asign the value of name, to the new pointer-variable new_name */
	if (new_name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
/* Return NULL if the function fails,in case new_name is NULL,we free memory */
	new_owner = _strdup(owner);
/* We asign the value of owner, to the new pointer-variable new_owner */
	if (new_owner == NULL)
	{
		free(new_name);
		free(new_dog);
		return (NULL);
	}
/* If new_owner value is NULL, we free all the */
/* memory from the function and new_name */
	new_dog->name = new_name;
	new_dog->age = age;
	new_dog->owner = new_owner;
/* We now asign the value of the struct pointers to the value of our */
/* new string values */
	return (new_dog);
}
