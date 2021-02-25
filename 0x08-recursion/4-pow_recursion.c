#include "holberton.h"

/**
 * _pow_recursion - find value of x raised to the power of y
 * @x: base number
 * @y: power of
 * Return: -1 if y is lower than 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
