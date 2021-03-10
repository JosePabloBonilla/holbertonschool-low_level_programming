#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - function that searchs for integer
 * @array: array of int
 * @size: size of array
 * @cmp: compare values
 * Return: -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
