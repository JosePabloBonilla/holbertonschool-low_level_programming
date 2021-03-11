#include "variadic_functions.h"

/**
 * print_strings - function that prints strings
 * @separator: string printed between strings
 * @n: number of strings passed to the function
 * Return: arg
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	char *ptr;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		ptr = va_arg(arg, char*);

		if (ptr)
			printf("%s", ptr);

		else
			printf("(nil)");

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg);
}
