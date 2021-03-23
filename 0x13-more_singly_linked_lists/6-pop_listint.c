#include "lists.h"

/**
 * pop_listint - deletes head node and return the node's data
 * @head: head of liked list
 * Return: node data
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n; /* node's data */

	tmp = *head;
	if (*head == NULL)
		return (0);

	*head = tmp->next;
	n = tmp->n;
	free(tmp);
	return (n);
}
