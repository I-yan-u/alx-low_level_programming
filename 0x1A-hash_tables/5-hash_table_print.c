#include "hash_tables.h"
/**
 * hash_table_print - Prints all the (none-empty) content of an hash table
 * @ht: The hash table
 *
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *point;
	int first = 1;

	if (ht == NULL)
	return;

	printf("{");
	while (index < ht->size)
	{
		point = ht->array[index];
		while (point != NULL)
		{
			if (first == 1)
			{
				printf("'%s': '%s'", point->key, point->value);
				first = 0;
			}
			else
				printf(", '%s': '%s'", point->key, point->value);
			point = point->next;
		}
		index++;
	}
	printf("}\n");
}
