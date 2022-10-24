#include "lists.h"

/**
 * listint_len - prints the integer data of an integer list
 *
 * @h: the pointer to the first node
 *
 * Return: number of nodes in list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}

