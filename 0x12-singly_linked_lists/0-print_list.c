#include "lists.h"

/**
 * print_list - it prints out contents of a list
 * @h: The pointer to the next node
 *
 * Return: count of list
 */

size_t print_list(const list_t *h)
{
size_t count = 0;

while (h != NULL)
{
	count++;
	if (h->str == NULL)
		printf("[%d] (nil)\n", h->len);
	else
		printf("[%d] %s\n", h->len, h->str);
	h = h->next;
}
return (count);
}
