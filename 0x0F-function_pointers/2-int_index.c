#include "function_pointers.h"

/**
 * int_index - searches for an int in an array
 * @array: array to be searcched
 * @size: The size of the array
 * @ cmp: The function pointer
 *
 * Return: the index of the number if found.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, result;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		result = cmp(array[i]);

		if (result == 1)
			return (i);
	}
	return (-1);
}

