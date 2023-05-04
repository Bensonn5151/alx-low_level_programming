#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to another
 * @n: the first number
 * @m: the second number
 * Return: the number of flipped bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int xor = n ^ m;
	int digits = 0;

	if (!n || !m)
		return (0);
	while (xor)
	{
		if (xor & 1)
			digits++;
		xor = xor >> 1;
	}
	return (digits);
}
