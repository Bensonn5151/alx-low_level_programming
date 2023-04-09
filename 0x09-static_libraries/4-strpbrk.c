#include "main.h"

/**
 * _strpbrk - search a string for any set of bytes
 * @s: string
 * @accept: string to match
 * Return: Pointer to the byte in 's' that matches one of the bytes in 'accept'
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;
	char *p;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				p = &s[i];
				return (p);
			}
		}
	}
	return (0);
}
