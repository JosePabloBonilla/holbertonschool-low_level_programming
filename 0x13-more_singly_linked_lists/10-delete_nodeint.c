#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index of a linked list
 * @head: head of linked list
 * @index: index to delete
 * Return: succes 1, fail -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp, *prev;

	if (head == NULL || *head == NULL)
		return (-1);

	tmp = *head;
	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	i = 0;
	prev = *head;
	while (*head != NULL)
	{
		if (i == index)
		{
			prev->next = tmp->next;
			free(tmp);
			return (1);
		}
		prev = tmp;
		tmp = tmp->next;
		i++;
	}
	if (i == index)
	{
		tmp->next = NULL;
		free(tmp);
		return (1);
	}
	return (-1);
}
