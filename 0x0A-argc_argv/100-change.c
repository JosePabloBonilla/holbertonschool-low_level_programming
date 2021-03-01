#include <stdio.h>
#include <stdlib.h>
/**
 * change - manage change
 * @t: total
 * Return: change
 */

int change(int t)
{
	int c = 0;

	while (t)
	{
		if (t >= 25)
			t -= 25;
		else if (t >= 10)
			t -= 10;
		else if (t >= 5)
			t -= 5;
		else if (t >= 2)
			t -= 2;
		else if (t >= 1)
			t -= 1;
		c++;
	}
	return (c);
}

/**
 * main - prints minimum number of coins to make change
 * @argc: argument count
 * @argv: array of arguments
 * Return: 0 for success, 1 for Error
 */

int main(int argc, char *argv[])
{
	int t;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	t = atoi(argv[1]);
	if (t < 0)
	{
		printf("0\n");
		return (0);
	}

	printf("%d\n", change(t));
	return (0);
}
