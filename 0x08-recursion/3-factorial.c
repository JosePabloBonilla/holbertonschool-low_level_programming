#include "holberton.h"

/**
 * factorial - find factorial of n
 * @n: given number
 * Return: -1 if n is lower than 0 & 1 if factorial of 0 is 1
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	else
	{
		n = factorial(n - 1) * n;
		return (n);
	}
}
