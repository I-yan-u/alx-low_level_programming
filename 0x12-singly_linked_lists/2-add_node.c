#include "lists.h"

/**
 * _str_len - checks lenght of string
 * @str: string to be checked
 *
 * Return: lenght of string
 */

size_t _strlen(const char *str)
{
size_t len;

len = 0;

while (str[len] != '\0')
	len++;

return (len);
}

/**
 * add_node - adds a node at the beginning of a list
 * @head: the first poiter to the first node
 * @str: data, string to be placed in the node
 *
 * Return: pointer to the next node
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *newNode;
char *string;
int lenght;

newNode = malloc(sizeof(list_t));
if (newNode == NULL)
{
	return (NULL);
}
if (str == NULL)
{
	string = NULL;
	lenght = 0;
}
else
{
	string = strdup(str);
	lenght = _strlen(str);
}

newNode->str = string;
newNode->len = lenght;

newNode->next = *head;
*head = newNode;
return (*head);
}

