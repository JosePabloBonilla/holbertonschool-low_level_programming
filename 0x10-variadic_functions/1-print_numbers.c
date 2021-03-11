#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers
 * @n: number of ints passed to the function
 * @separator: string printed between numbers
 * Return: arg
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arg, unsigned int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg);
}
