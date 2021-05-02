#include "lists.h"
/**
 * dlistint_len - print all nodes of list
 * @h: head of list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
/**
 * delete_dnodeint_at_index - delete node at index of list
 * @head: head of list
 * @index: index (position)
 * Return: 1 for success, 0 if fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	size_t length;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	length = dlistint_len(*head);
	if (index >= length)
		return (-1);

	length = dlistint_len(*head);
	if (index >= length)
		return (-1);
	current = *head;
	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}
	if (index == (length - 1))
	{
		while (current->next)
		{
			current = current->next;
		}
		free(current);
	}
	while (current)
	{
		if (i == index)
		{
			current->next->prev = current->prev;
			current->prev->next = current->next;
			free(current);
			return (1);
		}
		current =current->next;
		i++;
	}
	return (-1);
}
