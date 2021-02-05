#include<stdlib.h>
#include<stdio.h>
#include<time.h>

/**
 *main - print single digit numbers of base 10 starting from 0.
 *
 *Return: (0) for success
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
