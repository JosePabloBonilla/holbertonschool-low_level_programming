#include "holberton.h"

/**
 * print_last_digit - prints last digit
 * @n: number
 * Return: last digit
 */
int print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
		n = -n;
	_putchar(n + '0');
	return (n);
}
