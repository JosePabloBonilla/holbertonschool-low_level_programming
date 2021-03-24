#include "lists.h"

/**
 * print_listint_safe - prints a lintint_t
 * @head: head of linked list
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp;
	int node;
	size_t num;

	tmp = head;
	if (tmp == NULL)
	{
		return (0);
		exit(98);
	}
	num = 0;
	while (tmp != NULL)
	{
		node = tmp - tmp->next;
		num++;
		printf("[%p] %d\n", (void *)tmp, tmp->n);
		if (node > 0)
			tmp = tmp->next;

		else
		{
			printf("-> [%p] %d\n", (void *)tmp->next, tmp->next->n);
			break;
		}
	}
	return (num);
}
