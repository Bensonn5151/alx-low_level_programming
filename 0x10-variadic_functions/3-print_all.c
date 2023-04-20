#include <stdarg.h>
#include <stdio.h>

void print_all(const char * const format, ...)
{
	va_list args;
	char *s, c;
	int i;
	float f;
	
	va_start(args, format);
	for (; *format; format++)
	{
		switch (*format)
		{
			case 'c':
				c = (char)va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d", i);
				break;
			case 'f':
				f = (float)va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					printf("(nil)");
				else
					printf("%s", s);
				break;
			default:
				continue;
		}
		if (*(format + 1) != '\0' && (*format == 'c' || *format == 'i' || *format == 'f' || *format == 's'))
			printf(", ");
	}
	printf("\n");
	va_end(args);
}

