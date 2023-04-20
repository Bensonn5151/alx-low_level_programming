#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that print numbers
 * @separator: An input string printed between numbers
 * @n: number of parameters
 * Return: all parameters
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list l;
	unsigned int i = 0;
	int nums;

	va_start(l, n);
	for (; i < n; i++)
	{
		nums = va_arg(l, int);
		printf("%d", nums);
		if (separator == NULL)
			continue;
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(l);
}
