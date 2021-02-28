#include <stdio.h>
#include <stdlib.h>

/**
 * main - print result of multiplication
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 for success, 1 for error
 */

int main(int argc, char *argv[])
{
	int x, y, prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	prod = x * y;

	printf("%d\n", prod);
	return (0);
}
