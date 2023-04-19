#include <stdlib.h>
/**
 * int_index -  function that searches for an integer.
 * @array: A pointer to array
 * @size: Size of the array
 * @cmp: cmp(function) to compare the elements
 * Return: The index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	
	if (size <= 0 || !array || !cmp)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}

