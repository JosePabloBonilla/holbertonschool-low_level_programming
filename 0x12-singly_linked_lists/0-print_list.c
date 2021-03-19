#include "lists.h"

/**
 * print_list - prints all the elements of list_t
 * @h: head of linked list
 * Return: number of elemets
 */
size_t print_list(const list_t *h)
{
	size_t size;

	for (size = 0; h != NULL; size++)
	{
		if (h->str == NULL)
			printf("[%d] (nil)\n", 0);
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (size);
}
