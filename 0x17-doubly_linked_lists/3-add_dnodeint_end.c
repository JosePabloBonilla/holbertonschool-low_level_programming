#include "lists.h"

/**
 * add_dnodeint_end - add node at end of list
 * @head: head of list
 * @n: data of node
 * Return: address of new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *current;

	new = malloc(sizeof(dlistint_t));
	new = NULL;
	if (new == NULL)
		return (NULL);

	current = *head;
	new->n = n;
	new->next = NULL;
	if (current == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while (current->next)
	{
		current = current->next;
	}
	current->next = new;
	new->prev = current;
	return (new);
}
