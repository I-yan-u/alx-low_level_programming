#include "lists.h"

/**
 * dlistint_len - FInds lenght of a linked list.
 * @h: Head of the list.
 *
 * Return: Lenght of the list.
 */

size_t dlistint_len(const dlistint_t *h)
{
unsigned int i = 0;

while (h)
{
i++;
h = h->next;
}
return (i);
}

/**
 * insert_dnodeint_at_index - Insert node at chosen index.
 * @h: The pointer to the head of the list.
 * @idx: Desired position to manipulate list.
 * @n: Data to part of created node.
 *
 * Return: Pointer to the newly added node.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
size_t count = 0, lent;
dlistint_t *temp, *new;

if (!h)
return (NULL);
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);

new->n = n;
if (*h == NULL)
{
new->prev = NULL;
new->next = NULL;
*h = new;
return (new);
}

if (idx == 0)
return (add_dnodeint(h, n));

lent = dlistint_len(*h);
if (idx == lent - 1)
return (add_dnodeint_end(h, n));

temp = *h;
while (temp)
{
if (idx == count)
{
new->next = temp;
new->prev = temp->prev;
temp->prev->next = new;
temp->prev = new;
return (new);
}
temp = temp->next;
count++;
}
return (NULL);
}
