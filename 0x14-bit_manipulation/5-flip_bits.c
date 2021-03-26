#include "holberton.h"

/*
 * flip_bits - counts the bits needed to flip to go
 * from one number to another
 * @n: first int
 * @m: second int
 * Return: bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;

	n = n ^ m;
	while (n > 0)
	{
		if (n & 1)
			i++;
		n = n >> 1;
	}
	return (i);
}
