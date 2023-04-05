#include "main.h"

/**
 * _puts_recursion -  function that prints a string, followed by a new line
 * @st: An input string to printing
 * Return: Nothing
 */
void _puts_recursion(char *st)
{
	if (*st)
	{
		_putchar(*st);
		_puts_recursion(st + 1);
	}
	else
		_putchar('\n');
}
