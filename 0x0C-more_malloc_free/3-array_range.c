#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - A function that creates an array of integers
 * @min: min number to start
 * @max: max number to start
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *new;
	int d, i;

	if (min > max)
		return (NULL);
	d = max - min;
	new = malloc((d + 1) * sizeof(int));
	if (new == NULL)
		return (NULL);
	for (i = 0; i <= d; i++)
		new[i] = min++;
	return (new);
}
