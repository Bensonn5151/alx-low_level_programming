#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: alwasy 0
 */
int main(void)
{
	char *s = "hello, world";
	char *f = "0leh";
	unsigned int n;

	n = _strspn(s, f);
	printf("%u\n", n);
	return (0);
}
