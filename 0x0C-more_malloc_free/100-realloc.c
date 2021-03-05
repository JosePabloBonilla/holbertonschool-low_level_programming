#include "holberton.h"
#include <stdlib.h>

/**
 * _memcpy - copies memory area
 * @dest: memory destination
 * @src: memory source
 * @n: bytes to copy to dest
 * Return: pointer to memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	for (; n > 0; n--)
	{
		dest[n - 1] = src[n - 1];
	}

	return (dest);
}

/**
 * *_realloc - reallocates a memory block
 * @ptr: void pointer
 * @old_size: old memory size
 * @new_size: new memory size
 * Return: pointer to new size
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr2 = NULL;

	if (ptr == NULL)
	{
		ptr2 = malloc(new_size);
		return (ptr2);
	}

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	ptr2 = malloc(new_size);

	_memcpy(ptr2, ptr, old_size);

	free(ptr);

	return (ptr2);
}
