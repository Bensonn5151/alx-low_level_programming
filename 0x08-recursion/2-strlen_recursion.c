#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string.
 * @st: An input string to printing
 * Return: The length of the string
 */
int _strlen_recursion(char *st)
{
	if (*st)
		return (1 + _strlen_recursion(st + 1));
	return (0);
}
