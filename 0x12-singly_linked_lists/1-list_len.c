#include "lists.h"

/**
 * list_len - gets lenght of a list
 * @h: The pointer to the next node
 *
 * Return: count of list
 */

size_t list_len(const list_t *h)
{
size_t count = 0;
while (h != NULL)
{
count++;
h = h->next;
}
return (count);
}


