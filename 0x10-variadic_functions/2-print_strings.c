#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - A function that print strings
 * @separator: An input string to be printed
 * @n: number of parameters
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	char *s;

	va_start(ap, n);
	for (; i < n; i++)
	{
		s = va_arg(ap, char*);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (separator == NULL)
			continue;
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
