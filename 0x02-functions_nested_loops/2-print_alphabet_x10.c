#include "holberton.h"

/*
 *
 * Print alphabet x10
 *
 *
 */

int main(void)
{
	print_alphabet_x10();
	return(0);
}
void print_alphabet_x10(void)
{
	int a;
	int b;
	b = 0;
	while (b < 10)
	{
		a = 'a';
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
       	_putchar('\n');
	b++;
	}
		
}
