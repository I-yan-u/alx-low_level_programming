#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of numbers in the range
 * @min: lowest number in the range
 * @max: highest number in range
 *
 * Return: The array
 */

int *array_range(int min, int max)
{
	int diff, i;
	int *range;

	if (min > max)
	{
		return (NULL);
	}

	diff = max - min;

	range = malloc(sizeof(int) * diff + 1);

	if (range == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= diff; i++)
	{
		range[i] = min + i;
	}
	return (range);

}

