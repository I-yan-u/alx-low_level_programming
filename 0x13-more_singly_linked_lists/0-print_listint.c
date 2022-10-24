#include "lists.h"

/**
 * print_listint - prints the integer data of an integer list
 *
 * @h: the pointer to the first node
 *
 * Return: number of nodes in list
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}

