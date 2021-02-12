#include "holberton.h"

/**
 * _isdigit - checks if value a digit 0-9
 * @c: int to be checked
 * Return: 1 if c is a digit, 0 if not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
