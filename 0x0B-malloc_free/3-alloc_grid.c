#include <stdlib.h>
#include "holberton.h"

/**
 * alloc_grid - returns a pointer to a 2d array of integers
 * @width: array width
 * @height: array height
 * Return: pointer to the array, if not NULL
 */

int **alloc_grid(int width, int height)
{
	int row, col;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **)malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	for (row = 0; row < height; row++)
	{
		grid[row] = malloc(width * sizeof(int));
		if (!grid[row])
		{
			for (row = 0; row < height; row++)
			{
				free(grid[row]);
			}
			free(grid);
			return (NULL);
		}

		for (col = 0; col < width; col++)
			grid[row][col] = 0;
	}
	return (grid);
}
