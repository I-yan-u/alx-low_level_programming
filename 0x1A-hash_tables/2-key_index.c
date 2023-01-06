#include "hash_tables.h"

/**
 * key_index - Function to create an index for a key in an Hash table
 *
 * @key: The key to create an index for
 * @size: The size of the Hash table
 *
 * Return: It returns an index on the Hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
