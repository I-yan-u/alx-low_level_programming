#include "lists.h"

/**
 * free_list - frees up allocated memory for lists
 * @head: the pointer to the first node in list
 *
 */

void free_list(list_t *head)
{
	list_t *temp;
	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}

