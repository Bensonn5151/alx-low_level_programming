#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: Pointer to the first string
 * @s2: Pointer to the second string
 * @n: Number of bytes from s2 to concatenate
 *
 * Return: Pointer to a newly allocated memory or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len1, len2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = strlen(s1);
	len2 = strlen(s2);
	if (n >= len2)
		n = len2;
	concat = (char *)malloc(sizeof(char) * (len1 + n + 1));
	if (concat == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		concat[i] = s1[i];
	for (j = 0; j < n; j++, i++)
		concat[i] = s2[j];
	concat[i] = '\0';
	return (concat);
}

