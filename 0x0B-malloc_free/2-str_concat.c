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
	return (i);
}

/**
 * str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * Description - concatenate two strings
 * Return: pointer to new space containing the 2 strings, if not NULL
 */

char *str_concat(char *s1, char *s2)
{
	int i, l;
	char *new;

	if (s1 == NULL)
		s1 = "";

	i = _strlen(s1);

	if (s2 == NULL)
		s2 = "";

	l = _strlen(s2);

	new = (char *)malloc((i + l - 1) * sizeof(char));

	if (new == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		new[i] = s1[i];

	for (l = 0; s2[l] != '\0'; l++)
		new[i + l] = s2[l];

	return (new);
}
