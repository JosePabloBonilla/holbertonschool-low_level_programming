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
	int row;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (row = 0; row < height; row++)
	{
		grid[row] = malloc(sizeof(int) * width);
		if (grid[row] == NULL)
		{
			for (row = 0; row < height; row++)
			{
				free(grid[row]);
			}
			free(grid);
			return (NULL);
		}
	}
	return (grid);
}
