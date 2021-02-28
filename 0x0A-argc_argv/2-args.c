#include <stdio.h>

/**
 * main - print all argument received
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
