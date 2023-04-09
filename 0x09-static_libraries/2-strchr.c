#include "main.h"
#include <stdio.h>

/**
 * _strchr - a function that locates character in a string
 * @s: input string
 * @c: input character
 * Return: return pointer to c character
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
}
