#include "main.h"
#include <stdlib.h>

/**
 * _calloc -function that allocates a memory for an array
 * @nmemb: amount of memory spaces
 * @size: size of nmemb
 * Return: returns pointer to allocated space, or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *x;

	if (nmemb == 0 || size == 0)
		return (NULL);

	x = malloc(nmemb * size);
	if (x == NULL)
		return (NULL);

	for (; i < nmemb * size; i++)
		*(x + i) = 0;

	return (x);
}
