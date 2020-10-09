#include <stdio.h>

/**
 *main - taking in the input that you would normally use to execute the file
 *and return that as an output
 *@argc: Variable that accounts for the length of the input
 *@argv: Variable that accounts for the length of the input as an array
 *Return: The value returns 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)

	{

	printf("%s\n", argv[0]);

	}

	return (0);
}
