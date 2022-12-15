#include "lists.h"

/**
 * print_dlistint - Print content of doubly linked lists
 * @h: pointer to first node
 *
 * Return: amount of node in the list.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
