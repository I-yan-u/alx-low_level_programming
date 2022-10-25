#include "lists.h"

/**
 * sum_listint - Sums the data parts of the nodes in lists.
 * @head: pointer to first node in the list
 *
 * Return: sum of data in list
 */

int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	if (head == NULL)
		return(sum);
	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}

