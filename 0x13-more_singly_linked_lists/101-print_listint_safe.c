#include "lists.h"

/**
 * print_listint_safe - prints a lintint_t
 * @head: head of linked list
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp1, *tmp2;
	size_t num;

	tmp1 = head;
	if (tmp1 == NULL)
	{
		return (0);
		exit(98);
	}
	num = 0;
	while (tmp1 != NULL)
	{
		tmp2 = tmp1;
		tmp1 = tmp1->next;
		num++;
		printf("[%p] %d\n", (void *)tmp2, tmp2->n);
		if (tmp2 <= tmp1)
		{
			printf("-> [%p] %d\n", (void *)tmp1, tmp1->n);
			break;
		}
	}
	return (num);
}
