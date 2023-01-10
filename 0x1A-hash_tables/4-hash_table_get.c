#include "hash_tables.h"
/**
 * hash_table_get - Gets a value from an hash table
 * @ht: The hash table
 * @key: The key to the value
 *
 * Return: Returns the value if key is present...
 * or (null) if not found.
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index;
	hash_node_t *point;

	if (ht == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	point = ht->array[index];

	if (point == NULL)
		return (NULL);
	while (point != NULL)
	{
		if (strcmp(key, point->key) == 0)
			return (point->value);
		point = point->next;
	}
	return (NULL);
}
