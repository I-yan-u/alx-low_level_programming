#include "lists.h"

/**
 * get_dnodeint_at_index - Gets node at selected position(index)
 * @head: The pointer to first nde
 * @index: The position of choice (starting from 0)
 *
 * Return: Node at index.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t count = 0;
	dlistint_t *temp;

	if (!head)
		return (NULL);

	temp = head;
	while (temp)
	{
		if (index == count)
			return (temp);
		temp = temp->next;
		count++;
	}
	return (NULL);
}
