#include "main.h"

/**
 * _strspn: search string for set of bytes
 * @s: string char array
 * @accept: char array to check bytes
 * Return: number of bytes in initial segment s
 */

unsigned int _strspn(char *s, char *accept)
{
	int a;
	int b;
	int c;

	a = 0;
	b = 0;
	while (s[a] != '\0')
	{
		b = 0;
		while (accept[b] != '\0')
		{
			if (s[a] == accept[b])
			{
				c++;
				break;
			}
			b++;
		}
		if (accept[b] == '\0')
			break;
				a++;
	}
	return (c);
}
