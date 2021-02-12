#include "holberton.h"
#include <stdio.h>

/**
 * main - prints numbers 1-100 replacing multiples of 3 with fizz,
 * multiples of 5 with buzz, and multiples of both with fizzbuzz
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");

		else if (i % 3 == 0)
			printf("Fizz ");

		else if (i % 5 == 0)
			printf("Buzz ");

		else
			printf("%d ", i);
	}
	printf("Buzz\n");
	return (0);
}
