#include "lists.h"

/**
 * sum_dlistint - Sums all the list.
 * @head: The pointer to first nde
 *
 * Return: Sum of all the numbers in list.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
