#include "lists.h"
/**
 * dlistint_len - Amount of nodes in a list
 * @h: The pointer to the first node of list
 * 
 * Return: returns lenght of list.
 */
size_t dlistint_len(const dlistint_t *h)
{
    size_t count = 0;

    while (h)
    {
        count++;
        h = h->next;
    }
    return (count);
}
