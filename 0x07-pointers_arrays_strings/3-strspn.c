#include "holberton.h"

/**
 * _strspn - get length of a prefix substring
 * @s: string to search
 * @accept: bytes to match to s
 * Return: number of bytes that match in a row starting form s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	i = 0;
	while (*s)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(accept + j) == *s)
				break;
		}

		if (*(accept + j) != '\0')
			i++;

		else
			break;
		s++;
	}
	return (i);
}
