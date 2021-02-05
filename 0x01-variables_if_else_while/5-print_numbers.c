#include<stdlib.h>
#include<stdio.h>
#include<time.h>

/**
 * main - print single digit numbers of base 10 starting from 0.
 *
 * Return: (0) for success
 */
int main(void)
{
	char num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++
	}
	putchar('\n');
	return (0);
}
