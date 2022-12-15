#include "lists.h"

/**
 * print_dlistint - Print content of doubly linked lists
 * @h: pointer to first node
 *
 * Return: amount of node in the list.
 */

size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *temp;
	size_t count = 0;

	temp = head;
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}
	return (count);
}
