#include "holberton.h"

/**
 * print_line - print a line
 * @n: length of line
 * Return: 0
 */

void print_line(int n)
{
	while (n >= 1)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
