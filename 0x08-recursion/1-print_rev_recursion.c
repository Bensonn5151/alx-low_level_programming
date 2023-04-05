#include "main.h"

/**
 * _print_rev_recursion - a function that prints a string in reverse,
 * followed by a new line.
 * @st: An input string to printing
 * Return: Nothing
 */
void _print_rev_recursion(char *st)
{
	if (*st)
	{
		_print_rev_recursion(st + 1);
		_putchar(*st);
	}
}
