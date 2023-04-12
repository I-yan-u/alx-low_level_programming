#include "search_algos.h"

/**
* linear_search - Searches an array (list) using linear search algorith
* @array: The array to search
* @size: The size of the array to search through
* @value: The target value (what you are searchin for)
*
* Return: index on succes, -1 for failure
*/

int linear_search(int *array, size_t size, int value)
{
	int i = 0;
	int t = value;
	int n = size;

	if (!array)
		return (-1);

	while (i < n - 1)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == t)
		{
			if (i < n)
				return (i);
			else
				return (-1);
		}
		i++;
	}
	return (-1);
}
