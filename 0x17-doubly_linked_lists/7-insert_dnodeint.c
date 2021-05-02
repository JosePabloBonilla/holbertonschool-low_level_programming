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
 * insert_dnodeint_at_index - insert new node
 * @h: head of list
 * @idx: index (position)
 * @n: data of node
 * Return: address to new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current;
	size_t length;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));

	length = dlistint_len(*h);
	if (idx == length - 1)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*h == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
		*h = new;
		return (new);
	}
	current = *h;
	while (current)
	{
		if (i == idx)
		{
			new->next = current;
			new->prev = current->prev;
			current->prev->next = new;
			current->prev = new;
			return (new);
		}
		current = current->next;
		i++;
	}
	free(current);
	return (NULL);
}
