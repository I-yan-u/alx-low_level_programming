#include "lists.h"

/**
 * add_dnodeint_end - To add node at beginning of list.
 * @head: The pointer to the head of the list.
 * @n: The node data (int).
 *
 * Return: Address to the new node.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;

	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
		return (new);
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new;
	new->prev = temp;
	return (new);
}
