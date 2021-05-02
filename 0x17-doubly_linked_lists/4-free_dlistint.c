#include "lists.h"

/**
 * free_dlistint - frees the list
 * @head: head of list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		current = head;
		head = head->next;
		current->prev = NULL;
		current->next = NULL;
		free(current);
	}
}
