#include "holberton.h"

/**
 * set_bit - changes a bit at index to 1
 * @n: int pointer
 * @index: index
 * Return: 1 on success, -1 on fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	*n = *n | (1 << index);
	return (1);
}
