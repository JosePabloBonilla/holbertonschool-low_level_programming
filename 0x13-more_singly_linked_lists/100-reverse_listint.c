#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t
 * @head: head of linked list
 * Return: node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	prev = NULL;
	next = NULL;
	if (*head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
