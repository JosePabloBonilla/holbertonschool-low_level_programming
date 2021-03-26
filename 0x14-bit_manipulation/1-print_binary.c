#include "holberton.h"

/**
 * print_binary - prints the binary represention of a number
 * @n: integer
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int x;

	x = n;

	if (n < 2)
	{
		_putchar(n + '0');
		return;
	}
	else
	{
		print_binary(n >> 1);
		x = x & 1;
		_putchar(x + '0');
	}
}
