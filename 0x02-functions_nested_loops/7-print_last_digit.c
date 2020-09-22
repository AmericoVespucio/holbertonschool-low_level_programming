#include "holberton.h"

/**
 * print_last_digit - Entry point
 * @n: int
 * Return: lastdigit (Success)
 */

int print_last_digit(int n)
{
int lastdigit;
if (n < 0)
{
n = (n * -1);
}
lastdigit = n % 10;
_putchar(lastdigit + '0');
return (lastdigit);
}
