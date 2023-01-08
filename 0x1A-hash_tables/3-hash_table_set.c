#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: the key
 * @value: The value to add to the table
 *
 * Return: 1 if successful, 0 if not.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    hash_node_t *node, *head;
    unsigned long int index;

    if (ht == NULL)
        return (0);

    node = malloc(sizeof(hash_node_t));
    if (node == NULL)
        return (0);
    node->key = strdup(key);
    node->value = strdup(value);
    node->next = NULL;

    index = key_index((const unsigned char *)key, ht->size);
    if (ht->array[index] == NULL)
    {
        ht->array[index] = node;
    }
    else
    {
        head = ht->array[index];
        if (strcmp(key, head->key) == 0)
            head->value = strdup(value);
        else
        {
            node->next = head;
            ht->array[index] = node;
        }
    }
    return (1);
}
