#include "lists.h"

/**
 * add_nodeint - adds a node to the beginning of a list.
 * @head: The pointer to the first node.
 * @n: The data (integer) to be added to the list.
 *
 * Return: pointer to the list.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *intnode;

	intnode = malloc(sizeof(listint_t));

	if (intnode == NULL)
	{
		return (NULL);
	}

	intnode->n = n;
	intnode->next = *head;

	*head = intnode;
	return (*head);
}

