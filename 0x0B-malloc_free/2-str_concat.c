#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: input pointer of the first string
 * @s2: input pointer of the second string
 * Return: Apointer to concatened strings or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *new;
	unsigned int lens1 = 0;
	unsigned int lens2 = 0;
	unsigned int lens3;
	unsigned int i = 0;
	unsigned int j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[lens1])
		lens1++;
	while (s2[lens2])
		lens2++;
	lens3 = lens1 + lens2;
	new = malloc(sizeof(char) * lens3 + 1);
	if (new == NULL)
		return (NULL);
	while (i < lens1)
	{
		new[i] = s1[i];
		i++;
	}
	while (i <= lens3)
	{
		new[i] = s2[j];
		i++;
		j++;
	}
	return (new);
}
