#include <stdlib.h>
#include "holberton.h"

/**
 * free_grid - clears a 2d grid
 * @grid: pointer to the grid
 * @height: height of the grid
 * Return: 0 for success
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
