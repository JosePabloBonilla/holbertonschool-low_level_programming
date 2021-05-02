#include "lists.h"
/**
 * sum_dlistint - get the sum of all the data of a list
 * @head: head of list
 * Return: sum of all data
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum = 0;

	current = head;
	if (current == NULL)
		return (0);
	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
