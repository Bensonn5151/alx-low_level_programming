#include "main.h"

/**
 * print_binary - A function that prints a binary number without % or /
 * @n: The number to be printed
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	unsigned int min_n = 0, max_n = 32768;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (max_n)
	{
		if (min_n == 1 && (n & max_n) == 0)
			_putchar('0');
		else if ((n & max_n) != 0)
		{
			_putchar('1');
			min_n = 1;
		}
		max_n >>= 1;
	}
}
