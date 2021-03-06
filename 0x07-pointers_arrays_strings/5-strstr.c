#include "holberton.h"

/**
 * _strstr - function that locates a substring
 * @haystack: string that is being compared
 * @needle: substring that is being located
 * Return: null is nothing is found
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int j, i, locate;

	for (j = 0; haystack[j] != '\0'; j++)
	{
		for (locate = j, i = 0; needle[i] != '\0'; i++, locate++)
		{
			if (needle[i] != haystack[locate] || haystack[locate] == '\0')
				break;
		}
		if (needle[i] == '\0')
			return (haystack + j);
	}
	return ('\0');
}
