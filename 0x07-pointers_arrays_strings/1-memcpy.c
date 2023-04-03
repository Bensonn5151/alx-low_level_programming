#include "main.h"

/**
 * _memcpy - function that copies memory
 * @n: number of bytes to copy
 * @src: memory arear to copy from
 * dest: array fo copy into
 * Return: Pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *me;

	me = dest;
	while (n >0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return (me);
}
