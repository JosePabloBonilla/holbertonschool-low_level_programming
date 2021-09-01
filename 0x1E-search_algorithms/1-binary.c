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
	if (!array)
		return (-1);
	
	return (print_array(array, size, 0, size - 1, value));
}
/**
 * print_array - print array
 * @array: pointer to first element of array
 * @size: size of array
 * @left: left element
 * @right: right element
 * @value: value searching for
 * Return: The first index where value is located
 */
int print_array(int *array, size_t size, size_t left, size_t right, int value)
{
	size_t i;

	printf("Searching in array: %d", array[left]);
	for (i = left + 1; i <= right; i++)
		printf(", %d", array[i]);
	putchar('\n');

	if (left >= right)
		return (-1);

	if (value == array[(left + right) / 2])
		return ((left + right) / 2);

	if (value < array[(left + right) / 2])
		return (print_array(array, size, left, ((left + right) / 2), value));

	if (value > array[(left + right) / 2])
		return (print_array(array, size, (left + right) / 2 + 1, right, value));

	return (-1);
}
