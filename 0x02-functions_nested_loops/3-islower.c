#include "holberton.h"

/**
 * _islower - does this
 *
 * Return: Always 0. If not 1
 */

int _islower(int c)
{
if ((c >= 'a') && (c <= 'z'))
{
return (1);
}
else
{
return (0);
}
}
