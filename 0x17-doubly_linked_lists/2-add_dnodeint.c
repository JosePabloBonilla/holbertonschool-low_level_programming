#include "lists.h"

/**
 * add_dnodeint - add new node at beginning of list
 * @head: head of list
 * @n: data of node
 * Return: address of new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *current;

	new = malloc(sizeof(dlistint_t));
	current = *head;
	if (new == NULL)
		return (NULL);

	new->n = n;
	if (current == NULL)
	{
		new->next = NULL;
		*head = new;
		return (new);
	}
	current->prev = new;
	new->prev = NULL;
	*head = new;
	new->next = current;
	return (new);
}
