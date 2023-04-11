#include "main.h"
#include <stdlib.h>

/**
 * _strdup - A function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a
 * parameter.
 * @str: An input pointer of the string to copy.
 * Return: Apointer to new string or NULL if it str is NULL
 */
char *_strdup(char *str)
{
	char *fresh_str, *begin;
	int i = 0, len = 0;

	if (str == NULL)
		return (NULL);
	begin = str;
	while (*str)
	{
		len++;
		str++;
	}
	str = begin;
	fresh_str = malloc(sizeof(char) * (len + 1));
	begin = fresh_str;
	if (fresh_str != NULL)
	{
		for (; i < len; i++)
		{
			fresh_str[i] = *str;
			str++;
		}
		fresh_str[i] = '\0';
		return (begin);
	}
	else
		return (NULL);
}
