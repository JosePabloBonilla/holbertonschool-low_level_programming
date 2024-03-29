#include "search_algos.h"
/**
 * linear_search - searches for a value in an array of integers using the
 * Linear search algorithm
 * @array: pointer to first element of array
 * @size: size of array
 * @value: value to search for
 * Return: index of matched value, -1 if error
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (array == NULL || size == 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
