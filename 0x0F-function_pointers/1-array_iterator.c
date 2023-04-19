#include <stdlib.h>

/**
 * array_iterator - executes a function given as parameter on each element
 * @array: pointer to array
 * @size: Size of  array
 * @action: pointer to function
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a = 0;

	if (action == NULL || array == NULL)
		return;

	for (; a < size; a++)
		action(array[a]);
}
