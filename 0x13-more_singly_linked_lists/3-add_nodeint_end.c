#include "lists.h"

/**
 * add_nodeint_end - Adds a node to the end of a list.
 * @head: The pointer to the first node.
 * @n: The integer data to be added to the list.
 *
 * Return: Returns pointer to the added node.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *intnode;
	listint_t *temp;

	temp = *head;
	intnode = malloc(sizeof(listint_t));
	if (intnode == NULL)
	{
		return(NULL);
	}

	intnode->n = n;
	intnode->next = NULL;

	if (*head == NULL)
	{
		*head = intnode;
		return (intnode);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = intnode;
	return (intnode);
}

