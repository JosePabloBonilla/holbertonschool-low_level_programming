#include "holberton.h"

/**
 * _strlen - swaps two values
 * @s: string
 * Return: 1 on success
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
