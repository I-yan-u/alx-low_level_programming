#include "function_pointers.h"

/**
 * array_iterator - prints content of an array with defined options
 * @array: the array
 * @size: size of array
 * @action: the option
 *
 * Return: none
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || size == 0)
		return;
	if (action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

