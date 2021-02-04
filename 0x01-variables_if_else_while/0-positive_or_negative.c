#include<stdio.h>
#include<time.h>
/* more headers goes here */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Min : 1 Max : 40 %d\n", random_number(1, 40));
	return (0);
}
