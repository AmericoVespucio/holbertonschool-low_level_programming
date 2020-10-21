#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - print a name using function pointer
 * @name: name of the person
 * @f: function pointer
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
if (f != NULL) /* If function DOES NOT enters at null or has null value */
{
	f(name); /* Then call the function with parameter name */
}
}
