#include<stdio.h>
#include<unistd.h>
#include<string.h>
/**
 * main - prints the standard error
 * Return: (1)
 */
int main(void)
{
	int l;

	l = strlen("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", l);
	return (1);
}
