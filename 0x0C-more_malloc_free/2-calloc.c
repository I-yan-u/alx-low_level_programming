#include "main.h"

/**
 * _calloc - creates an array and init with 0
 * @nmemb: The number of space to allocate
 * @size: the size per space
 *
 * Return: the byte size of the array.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *call;
	void *arr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	arr = malloc(size * nmemb);

	if (arr == NULL)
		return (NULL);

	call = arr;
	for (i = 0; i < nmemb * size; i++)
	{
		call[i] = 0;
	}
	return (arr);

}

