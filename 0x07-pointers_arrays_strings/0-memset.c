#include "main.h"

/**
 * _memsetm- a function that fills memory with constant bytes
 * @n: number of bytes to fill
 * @s: memory area to fill
 * b: char to fill location with
 * Return: return pointer to location filled
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *fill = s;

	while (n--)
	{
		*fill = b;
		s++;
	}
	return (fill);
}
