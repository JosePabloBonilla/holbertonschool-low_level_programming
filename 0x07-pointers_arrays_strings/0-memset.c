#include "holberton.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to memory
 * @b: constant byte used to replace
 * @n: number of bytes to replace
 * Return: pointer to memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
