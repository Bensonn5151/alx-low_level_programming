#include "main.h"

/**
 * _memset- a function that fills memory with constant bytes
 * @n: number of bytes to fill
 * @s: memory area to fill
 * @b: char to fill location with
 * Return: return pointer to location filled
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
