#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 *
 * @width: the width of grid
 * @height: the height of grid
 *
 * Return: NULL on failure, pointer to 2D array
 */
int **alloc_grid(int width, int height)
{
	int **arr, i = 0, j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
			return (NULL);
	}
	for (i = 0; i < height; i++)
		for (; j < width; j++)
			arr[i][j] = 0;
	return (arr);
}
