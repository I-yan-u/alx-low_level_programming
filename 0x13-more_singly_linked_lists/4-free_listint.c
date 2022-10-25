#include "lists.h"

/**
 * free_listint - frees memory used by list.
 * @head: the pointer to the first node.
 *
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
