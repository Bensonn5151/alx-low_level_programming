#include "main.h"

/**
 * binary_to_uint - A function which converts binary number to an integer
 * @b: pointer to binary string
 * Return: unsigned integer converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int base = 1, answer = 0, length = 0;

	if (b == NULL)
		return (0);

	while (b[length])
		length++;

	while (length)
	{
		if (b[length - 1] != '0' && b[length - 1] != '1')
			return (0);

		if (b[length - 1] == '1')
			answer += base;
		base *= 2;
		length--;
	}
	return (answer);
}
