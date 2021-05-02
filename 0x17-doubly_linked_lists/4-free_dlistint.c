#include "lists.h"

/**
 * free_dlistint - frees the list
 * @head: head of list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head)
	{
		current = head->next;
		free(head);
		head = current;
	}
