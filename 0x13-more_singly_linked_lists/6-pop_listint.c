#include "lists.h"

/**
 * pop_listint - deletes the first node of a list and returns its data
 * @head: pointer to first node of a list
 *
 * Return: Data in the popped node.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	temp = *head;
	if (temp == NULL)
		return (0);

	data = temp->n;    
	*head = temp->next;

	free(temp);
	return (data);
}
