#include "lists.h"

/**
 * get_dnodeint_at_index - return the nth node of a list
 * @head: head of list
 * @index: index of node to return
 * Return: node or null if it does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (i < index)
	{
		if (head == NULL)
			return (NULL);
		i++;
		head = head->next;
	}
	return (head);
}
