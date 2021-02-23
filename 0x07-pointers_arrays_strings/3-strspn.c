#include "holberton.h"

/**
 * _strspn - get length of a prefix substring
 * @s: string to search
 * @accept: bytes to match to s
 * Return: number of bytes that match in a row starting form s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n, i;

	n = 0;
	while (*s)
	{
		for (i = 0; *(accept + i) != '\0'; i++)
		{
			if (*(accept + i) == *s)
				break;
		}

		if (*(accept + i) != '\0')
			n++;

		else
			break;
		s++;
	}
	return (n);
}
