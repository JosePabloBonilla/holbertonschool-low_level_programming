#include "holberton.h"
#include <stdio.h>

/**
 * main - print sum of all multiples of 3 and 5 up to 1024
 * Return: 0 for success
 */
int main(void)
{
	int sum, i;

	sum = 0;

	for (i = 1; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
