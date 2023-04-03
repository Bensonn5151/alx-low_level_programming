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
	unsigned int i, j, k;
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = i, k = 0; needle[k] != '\0' && haystack[j] == needle [k]; j++, k++);
			if (needle[k] == '\0')
			{
				return (&haystack[i]);
			}
		}
	}
	return (NULL);
}
