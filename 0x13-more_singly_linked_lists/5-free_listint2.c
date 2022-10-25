#include "lists.h"

/**
 * free_listint2 - Frees list of int and assign head to NULL
 *
 * @head: The pointer to the first node
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	temp = *head;
	while (temp != NULL)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}

