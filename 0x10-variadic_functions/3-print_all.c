#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed to the function
 * Return: arg
 */

void print_all(const char * const format, ...)
{
	va_list arg;
	int i = 0;
	char *sep = "";
	char *ptr;

	va_start(arg, format);
	if (format == NULL)
	{
		printf("\n");
		return;
	}

	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(arg, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(arg, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(arg, double));
				break;
			case 's':
				ptr = va_arg(arg, char*);
				if (ptr == NULL)
					ptr = "(nil)";
				printf("%s%s", sep, ptr);
				break;
			default:
				i++;
				continue;
		}
		sep = ", ";
		i++;
	}
	printf("\n");
	va_end(arg);
}
