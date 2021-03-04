#include <stdlib.h>
#include "holberton.h"

/**
 * argstostr - concatenates all the arguments of program
 * @ac: argument count
 * @av: argument vector
 * Return: pointer to a new string
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int i, l, res;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (l = 0; av[i][l]; l++)
			;
		res += l + 1;
	}

	str = malloc(sizeof(char) * res + 1);

	if  (!str)
		return (NULL);

	res = 0;

	for (i = 0; i < ac; i++)
	{
		for (l = 0; av[i][l]; l++)
		{
			str[res] = av[i][l];
			res++;
		}

		str[res] = '\n';
		res++;
	}
	str[res] = '\0';
	return (str);
}
