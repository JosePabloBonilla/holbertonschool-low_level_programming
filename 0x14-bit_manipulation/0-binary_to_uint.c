#include "holberton.h"

/**
 * _strlen - show string length
 * @s: string
 * Return: length of string
 */
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * power - exponent
 * @base: base
 * @exponent: exponent
 * Return: result
 */
int power(int base, int exponent)
{
	int i, num;

	num = 1;
	for (i = 0; i < exponent; i++)
		num *= base;

	return (num);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary pointer
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum;
	int len, i;

	sum = 0;
	if (b == NULL)
		return (0);

	len = _strlen(b);
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		sum += (b[i] - '0') * power(2, len - i - 1);
	}
	return (sum);
}
