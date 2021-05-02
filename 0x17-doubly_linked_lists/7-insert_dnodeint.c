#include "lists.h"
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
	unsigned int i = 0;
	
	new = *h;
	current = NULL;
	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));

	new = malloc(sizeof(dlistint_t));
	if (current == NULL)
		return (NULL);
	current->n = n;

	while (new)
	{
		if (i == idx)
		{
			current->next = new->prev;
			current->next = new;
			new->prev = current;
			current->prev->next = current;
			return (current);
		}
		if (new->next == NULL && idx == i + 1)
			return (free(current), add_dnodeint_end(h, n));
		new = new->next;
		i++;
	}
	free(current);
	return (NULL);
}
