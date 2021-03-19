#include "lists.h"
#include <string.h>

/**
 * _strlen - show string length
 * @s: string
 * Return: length of string
 */
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * add_node_end - add a new node at the end of a linked list
 * @head: head of a linked list
 * @str: stirng to use as data for new node
 * Return: number of elements
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;

	tmp = *head;

	new = malloc(sizeof(list_t));
	if (head == NULL)
		return (NULL);

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new;

	return (new);
}
