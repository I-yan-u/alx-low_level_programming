#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * _strdup - copies a tring to an array
 * @str: The string to be copied
 *
 * Return: the pointer to the copied str array.
 */

char *_strdup(char *str)
{
	unsigned int i, j;
	char *arr;

	j = 0;

	if (str == NULL)
		return (NULL);

	while (*(str + j) != '\0')
	{
		j++;
	}

	arr = malloc(j * sizeof(char) + 1);

	if (arr == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
	{
		arr[i] = s[i];
	}
	arr[i] = '\0';

	return (arr);
}

