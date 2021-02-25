#include "holberton.h"

/**
 * prime_chk - check if n is prime
 * @n: number to check
 * @i: number to use to check if it is prime
 * Description: determine if n is a prime using 2 parameter
 * Return: 1 if it is prime and 0 if not.
 */

int prime_chk(int n, int i)
{
	if (n % i == 0)
		return (0);

	if (n > i * i)
		return (prime_chk(n, i + 1));

	else
		return (1);
}

/**
 * is_prime_number - determine if n is a prime
 * @n: number given
 * Description: determine if n is a prime
 * Return: 1 if is prime, if not 0
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	else
		return (prime_chk(n, 2));
}
