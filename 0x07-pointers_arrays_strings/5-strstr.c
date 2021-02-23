#include "holberton.h"

/**
 * _strstr - find string inside a string
 * @haystack: string with everything
 * @needle: string to find
 * Return: matching substring, else null
 */

char *_strstr(char *haystack, char *needle)
{
	char *start;
	char *search;

	while (*haystack != '\0')
	{
		start = haystack;
		search = needle;

		while (*needle != '\0' && *search != '\0' && *search == *haystack)
		{
			haystack++;
			search++;
		}

		if (*search == '\0')
			return (start);
		haystack = start + 1;
	}
	return (0);
}
