#include "lists.h"

/**
 * _strlen - checks lenght of string
 * @string: string to be checked
 *
 * Return: lenght of string
 */

size_t _strlen(const char *string)
{
	size_t len;

	len = 0;
	while (string[len] != '\0')
		len++;

	return (len);
}

/**
 * add_node_end - adds a node at the beginning of a list
 * @head: the first poiter to the first node
 * @str: data, string to be placed in the node
 *
 * Return: pointer to the next node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *temp;
	char *string;

	temp = *head;
	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	if (str == NULL)
		return (NULL);

	string = strdup(str);
	if (string == NULL)
	{
		free(newNode);
		return (NULL);
	}

newNode->len = _strlen(str);
newNode->str = string;
newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

temp->next = newNode;
return (newNode);
}

