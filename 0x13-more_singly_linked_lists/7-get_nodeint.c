#include "lists.h"

/**
 * listint_len - count nodes in list
 * @h: pointer to first node
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}


/**
 * get_nodeint_at_index - gets ithe node at the specified index
 * @head: pointer to first node in list
 * @index: idex of node to return
 *
 * Return: specified node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	size_t list_len, n;

	list_len = listint_len(head);
	temp = head;

	if (head == NULL)
		return (NULL);
	if (index >= list_len)
		return(NULL);

	for (n = 0; n < index && n < list_len; n++)
	{
		temp = temp->next;
	}
	return (temp);
}

