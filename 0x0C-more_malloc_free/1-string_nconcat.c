#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - string length
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
 * string_nconcat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: integer that determines if s2 will be used
 * Description - concatenate two strings
 * Return: pointer to new space containing the 2 strings, if not NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1, l2, l3, i, j;
	char *new;

	if (s1 == NULL)
		s1 = "";

	l1 = _strlen(s1);

	if (s2 == NULL)
		s2 = "";

	l2 = _strlen(s2);

	if (n >= l2)
		n = l2;

	l3 = l1 + n;

	new = malloc(sizeof(char) * l3 + 1);

	if (new == NULL)
		return (NULL);

	for (i = 0; i < l1; i++)
		new[i] = s1[i];

	for (j = 0; j < n; j++, i++)
		new[i] = s2[j];

	new[i] = '\0';
	return (new);
}
