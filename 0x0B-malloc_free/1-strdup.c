#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a string
 * @str: string to copy
 * Description - duplicate a string
 * Return: pointer to the duplicated string, if not NULL
 */

char *_strdup(char *str)
{
	int i, l;
	char *str2;

	l = 0;

	if (str == NULL)
		return (NULL);

	while (str[l] != '\0')
		l++;

	str2 = malloc(sizeof(*str) * 1 + 1);
	if (str2 == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		str2[i] = str[i];

	return (str2);
}
