#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - adds the integer
 * @a: first integer
 * @b: second integer
 * Return: result
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtracts the integers
 * @a: first integer
 * @b: second integer
 * Return: result
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies the integers
 * @a: first integer
 * @b: second integer
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides the integers
 * @a: first integer
 * @b: second integer
 * Return: result of integers
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - modulus of a and b
 * @a: first integer
 * @b: second integer
 * Return: remainder
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
