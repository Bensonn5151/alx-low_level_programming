#include "main.h"

/**
 * get_bit - returns the value of a bit
 * @n: the number to check
 * @index: the index to check the bit
 * Return: value of the bit at @index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int max = 1;
	unsigned int bit = sizeof(n) * 8 - 1;

	if (index > bit)
		return (-1);

	max = max << index;

	if (n & max)
		return (1);
	else
		return (0);
}
