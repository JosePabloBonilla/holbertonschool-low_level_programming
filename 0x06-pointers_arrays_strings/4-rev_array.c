#include "holberton.h"

/**
 * reverse_array - reverse contents of array
 * @a: array of ints
 * @n: size of array
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i, tmp;

	i = 0;

	for (i = 0; i < n; i++)
	{
		tmp = a[n - 1];
		a[n - 1] = a[i];
		a[i] = tmp;
		n--;
	}
}
