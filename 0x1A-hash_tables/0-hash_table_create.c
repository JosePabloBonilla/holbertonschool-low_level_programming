#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: size of the hash table
 * Return: pointer to the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hsh_t;
	unsigned long int i;

	if (size <= 0)
		return (NULL);

	hsh_t = malloc(sizeof(hash_table_t));
	if (hsh_t->array == NULL)
	{
		free(hsh_t);
		return (NULL);
	}
	hsh_t->size = size;

	for (i = 0; i < size; i++)
		hsh_t->array[i] = NULL;

	return (hsh_t);
}
