#include "holberton.h"

/**
 * sqrt_chk - check is number has a square root
 * @n: number with square root
 * @c: number to test and find square root
 * Description: test if number has a square root
 * Return: square root of n
 */

int sqrt_chk(int n, int c)
{
	if (n == c * c)
		return (c);

	else if (n < c * c)
		return (-1);

	return (sqrt_chk(n, c + 1));
}

/**
 * _sqrt_recursion - find natural square root of number
 * @n: number given
 * Description: find square root of given number
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (sqrt_chk(n, 0));
}
