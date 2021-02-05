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
		for (y = '0'; y <= '9'; y++)
		{
			for (z = '0'; z <= '9'; z++)
			{
				if ((x < y) & (y < z) & (z <= '9'))
				{
					putchar(x);
					putchar(y);
					putchar(z);

					if ((x + y + z) < 168)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}
