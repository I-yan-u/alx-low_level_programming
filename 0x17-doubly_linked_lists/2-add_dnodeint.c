#include "lists.h"

/**
 * add_dnodeint - To add node at beginning of list.
 * @head: The pointer to the head of the list.
 * @n: The node data (int).
 *
 * Return: Address to the new node.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;

	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
		return (*head);
	}
	new->next = *head;
	(*head)->prev = new;
	*head = new;
	return (*head);
}
