#include "holberton.h"
#include <stdlib.h>

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
	i++;
	return (i);
}

/**
 * _strdup - duplicates a string
 * @str: string to copy
 * Description - duplicate a string
 * Return: pointer to the duplicated string, if not NULL
 */

char *_strdup(char *str)
{
	int i;
	char *str2;

	if (str == NULL)
		return (NULL);

	str2 = (char *)malloc((_strlen(str)) * sizeof(char));

	if (str2 == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		str2[i] = str[i];

	return (str2);
}
