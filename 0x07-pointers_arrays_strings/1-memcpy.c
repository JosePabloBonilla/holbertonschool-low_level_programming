#include "holberton.h"

/**
 * _memcpy - copies memory area
 * @dest: memory destination
 * @src: memory source
 * @n: bytes to copy to dest
 * Return: pointer to memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for(i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
