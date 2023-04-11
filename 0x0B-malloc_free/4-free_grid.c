#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2D array of ints
 *
 * @grid: input 2D array of int to free
 * @height: number of rows in grid
 *
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int x = 0;

	while (x < height)
	{
		free(grid[x]);
		x++;
	}
	free(grid);
}
