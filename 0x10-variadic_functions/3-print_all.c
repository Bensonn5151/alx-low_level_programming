#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_all - A function prints any character
 * @format: type of arguments passed to the function.
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list x;
	char *c;
	int i = 0;

	va_start(x, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", (char) va_arg(x, int));
				break;
			case 'i':
				printf("%d", va_arg(x, int));
				break;
			case 'f':
				printf("%f", (float) va_arg(x, double));
				break;
			case 's':
				c = va_arg(x, char*);
				if (c != NULL)
				{
					printf("%s", c);
					break;
				}
				printf("(nil)");
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
					format[i] == 's') && format[(i + 1)] != '\0')
			printf(", ");
		i++;
	}
	va_end(x);
	printf("\n");
}
