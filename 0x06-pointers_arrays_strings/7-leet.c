#include "holberton.h"

/**
 * leet - convert string to 1337 (leet)
 * @str: string to be encoded
 * Return: string c
 */

char *leet(char *str)
{
	int i, j;
	char arr1[] = "aAeEoOtTlL";
	char arr2[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; arr1[j] != '\0'; j++)
		{
			if (str[i] == arr1[j])
				str[i] = arr2[j];
		}
	}
	return (str);
}
