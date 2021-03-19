#include "lists.h"

void print_before(void) __attribute__ ((constructor));

/**
 * before - print line before main
 * Return: nothing
 */
void print_before(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
