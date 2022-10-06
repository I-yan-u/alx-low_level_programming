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
	int diff, i, num;
	int *range;

	if (min > max)
	{
		return (NULL);
	}

	diff = max - min + 1;

	range = malloc(sizeof(int) * diff);

	if (range == NULL)
	{
		return (NULL);
	}

	for (num = min, i = 0; i < diff && num <= max; num++, i++)
	{
		range[i] = num;
	}
	return (range);

}

