#include "holberton.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	if (s[0] == '\0')
		return (0);

	if (s[1] == '\0')
		return (1);

	else
		return (_strlen_recursion(&s[1]) + 1);
}

/**
 * CheckPal - check if string is a palindrome
 * @s: string to check
 * @n: size of string -1
 * @i: counter through string
 * Description: determine if it is a palindrome
 * Return: 1 if it is a palindrome, if not 0
 */

int CheckPal(char *s, int n, int i)
{
	if (n <= i)
		return (1);

	if (s[i] != s[n])
		return (0);

	else
		return (CheckPal(s, n - 1, i + 1));
}

/**
 * is_palindrome - checks if string is a palindrome
 * @s: string to check
 * Description: determine if string is a palindrome
 * Return: 1 if palindrome, if not 0
 */

int is_palindrome(char *s)
{
	return (CheckPal(s, _strlen_recursion(s) - 1, 0));
}
