#include "holberton.h"

/**
 * jack_bauer - Entry point
 *
 * Return: void (Success)
 */

void jack_bauer(void)

{

int hora1, hora2, min1, min2;

for (hora1 = 0; hora1 < 3; hora1++)
{
for (hora2 = 0; hora2 <= 9; hora2++)
{
if (hora1 == 2 && hora2 == 4)
{
break;
}
for (min1 = 0; min1 <= 5; min1++)
{
for (min2 = 0 ; min2 <= 9; min2++)
{
_putchar(hora1 + '0');
_putchar(hora2 + '0');
_putchar(':');
_putchar(min1 + '0');
_putchar(min2 + '0');
_putchar('\n');
}
}
}
}
}
