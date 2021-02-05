#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - prints numbers of base 16 in lowercase
 * Return: (0)
 */
int main(void)
{
	int num = 48;

	while (num <= 57)
	{
		putchar(num);
		num++;
	}

	num = 97;

	while (num <= 102)
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
