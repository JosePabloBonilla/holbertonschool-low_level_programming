#include "holberton.h"

/**
 * rev_string - reverse a string
 * @s: string to reverse
 * Return: nothing
 */

void rev_string(char *s)
{
	int i, j, l;
	char tmp;

	i = 0;
	j = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	l = i / 2;
	i = i - 1;

	while (i >= l)
	{
		tmp = s[j];
		s[j] = s[i];
		s[i] = tmp;
		i--;
		j++;
	}
}
