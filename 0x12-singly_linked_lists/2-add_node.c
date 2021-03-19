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
 * add_node - adds a new node at the beginning of list_t
 * @head: head of linked list
 * @str: string to use as data for node
 * Return: number of elements
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
		if (new == NULL)
			return (NULL);

	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;

	return (new);
}
