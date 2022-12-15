#include "lists.h"

/**
 * free_dlistint - Frees the memory allocated to create the list
 * @head: pointer to head.
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
