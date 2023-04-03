#include "main.h"
#include <stdlib.h>

/**
 * _strstr - locate a substring
 * @haystack: string
 * @needle: string substring
 * Return: pointer to beginning of substring
 */

char *_strstr(char *haystack, char *needle)
{
	char *beginn = needle, *beginh = haystack;

	while (*haystack)
	{
		beginh = haystack;
		needle = beginn;
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
			return (haystack);
		haystack = beginh +1;
	}
	return (NULL);
}
