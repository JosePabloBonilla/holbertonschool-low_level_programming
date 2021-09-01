#include "search_algos.h"
/**
 * binary_search - function that searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * @array: pointer to first element in array
 * @size: size of array
 * @value: value to search for
 * Return: The first index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t middle, left, right = 0;

	if (!array)
		return (-1);

	right = size - 1;

	while (left <= right)
	{
		middle = (left + right) / 2;
		print_array(array, right, left);
		if (array[middle] < value)
		{
			left = middle + 1;
		}
		else if (array[middle] > value)
		{
			right = middle - 1;
		}
		else
		{
			return (middle);
		}
	}
	return (-1);
}
/**
 * print_array - print array
 * @array: pointer to first element of array
 * @left: left element
 * @right: right element
 */
void print_array(int *array, size_t right, size_t left)
{
	printf("Searching in array:");

	while (left <= right)
	{
		if (left == right)
			printf(" %d", array[left]);
		else
			printf(" %d", array[left]);
		left++;
	}
	printf("\n");
}
