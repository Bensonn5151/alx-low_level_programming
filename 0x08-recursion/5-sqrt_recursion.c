#include "main.h"
int _sqrt(int pv, int rv);

/**
 * _sqrt_recursion - It returns the value of square root of n.
 * @n: an input integer
 * Return: The square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt(1, n));
}

/**
 * _sqrt - find square root
 * @pv: previous value
 * @rv: root value
 * Return: square root
 */
int _sqrt(int pv, int rv)
{
	if (pv > rv)
		return (-1);
	else if (pv * pv == rv)
		return (pv);
	return (_sqrt(pv + 1, rv));
}
