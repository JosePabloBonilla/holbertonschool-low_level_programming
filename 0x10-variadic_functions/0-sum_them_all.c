#include "variadic_functions.h"

/**
 * sum_them_all - function that returns summ of all parameters
 * @n: numbers
 * Return: sum of parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int i, sum;

	if (n == 0)
		return (0);

	va_start(arg, n);

	sum = 0;

	for (i = 0; i < n; i++)
		sum += va_arg(arg, unsigned int);

	va_end(arg);
	return (sum);
}
