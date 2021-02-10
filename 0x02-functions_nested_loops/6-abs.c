#include "holberton.h"

/**
 * _abs - computes absolute value
 * @n: number to be tested
 * Return: absolute value
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = n * (-1);
		return (n);
	}
	else
		return (n);
}
