#include "holberton.h"

/**
 * swap_int - swaps two values
 * @a: integer pointer
 * @b: integer pointer
 * Return: 1 on success
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
