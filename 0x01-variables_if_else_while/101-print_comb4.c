#include<stdio.h>

/**
 * main - prints all possible different combinations of three digits.
 * Return: (0) for success.
 */
int main(void)
{
	int x; /*first digit*/
	int y; /*second digit*/
	int z; /*third digit*/

	for (x = '0'; x <= '9'; x++)
	{
		for (y = x + '1'; y <= '9'; y++)
		{
			for (z = y + '1'; z <= '9'; z++)
			{
				putchar(x);
				putchar(y);
				putchar(z);

				if (((x * 100) + (y * 10) + (z)) < 789)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}
