#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function which allocates memory using malloc.
 * @b: unsigned input integer
 * Return: pointer to allocated memory or NULL if fail
 */
void *malloc_checked(unsigned int b)
{
	void *check;

	check = malloc(b);
	if (check == NULL)
		exit(98);
	return (check);
}
