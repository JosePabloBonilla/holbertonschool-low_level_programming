#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - create array of integers
 * @min: minimum integer
 * @max: maximum integer
 * Return: pointer to new array
 */

int *array_range(int min, int max)
{
	int *new, i, j;

		if (min > max)
			return (NULL);

	j = max - min + 1;
	new = malloc(sizeof(int) * j);

	if (new == NULL)
		return (NULL);

	for (i = 0; i < j; i++)
		new[i] = min++;

	return (new);
}
