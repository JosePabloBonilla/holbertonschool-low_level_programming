#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth (node given) node of listint_t
 * @head: head of linked list
 * @index: index of the node
 * Return: node of linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	node = head;
	for (i = 0; node != NULL; i++)
	{
		if (i == index)
			return (node);
		node = node->next;
	}
	return (NULL);
}
