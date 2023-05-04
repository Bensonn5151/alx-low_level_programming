#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0
 * @n: pointer to number
 * @index: place to change bit to 0
 * Return: 1 if it works, else -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bit = sizeof(n) * 8 - 1;
	unsigned int max = 1;

	if (index > bit)
		return (-1);
	*n = *n & ~(max << index);
	return (1);
}
