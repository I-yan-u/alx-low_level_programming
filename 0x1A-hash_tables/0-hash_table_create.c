#include "hash_table.h"

/**
 * hash_table_create - Creates an Hash table of specified size.
 * @size: The size of the table to create.
 *
 * Return: a pointer to the hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int index;

	if (size < 1)
		return (NULL);

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);
	ht->array = malloc(sizeof(hash_node_t) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	ht->size = size;

	for (index = 0; index < size; index++)
		ht->array[index] = NULL;
	return (ht);
}
