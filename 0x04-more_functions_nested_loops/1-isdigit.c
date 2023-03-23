#include "main.h"
#include <stdio.h>

/**
 * _isdigit - A function that checks fir a digit throgh 0 to 9
 * @c - An input integer
 * Return - If c is a digit, or  0 otherwise
 */
int _isdigit(int c)
{
	char i = '0';
	int isdigit = 0;

	for (; i <= '9'; i++)
	{
		if (i == c)
		{
			isdigit = 1;
			break;
		}
	}
	return (isdigit);
}
