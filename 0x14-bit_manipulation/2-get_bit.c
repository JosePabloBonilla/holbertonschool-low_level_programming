#include "holberton.h"

/**
 * get_bit - return value of bit a given index
 * @n: decimal
 * @index: index
 * Return: value at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	n = n >> index;
	n = n & 1;
	return (n);
}
