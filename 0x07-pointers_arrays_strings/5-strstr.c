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
	for (; *haystack != '\0'; haystack++)
	{
	char *beginn = needle;
	char *beginh = haystack;

	while (*beginn == *beginh && *beginh != '\0')
	{
		beginn++;
		beginh++;
	}
	if (*beginh == '\0')
		return(haystack);
	}
	return (NULL);
}
