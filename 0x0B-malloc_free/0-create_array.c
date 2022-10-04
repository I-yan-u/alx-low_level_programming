#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: char to initialize in array
 *
 * Return: returns pointer to array or null.
 */


char *create_array(unsigned int size, char c)
{
unsigned int i;
char *arr;

arr = (char *) malloc(sizeof(char) * size);
if (arr == NULL)
	return (NULL);
if (size != 0)
{
	for (i = 0; i < size; i++)
	{
		*(arr + i) = c;
	}
	return (arr);
}
else
	return (NULL);
}

