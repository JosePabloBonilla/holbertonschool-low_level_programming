#include<stdlib.h>
#include<stdio.h>
#include<time.h>

/**
 * main - print the alphabet in lowercase
 *
 * Return: (0) for success
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar ('\n');
	return (0);
}
