#include "search_algos.h"

/**
* binary_search - Searches an array (list) using binary search algorithm
* @array: The array to search
* @size: The size of the array to search through
* @value: The target value (what you are searchin for)
*
* Return: index on succes, -1 for failure
*/

int binary_search(int *array, size_t size, int value)
{
	int t = value;
	int n = size, left = 0, right = size - 1, mid, i = 0;
		
	while (left <= right)
	{		
		/*Print 'Searching in array: '*/
		printf("Searching in array: ");

		/*Loop through the array and print values up to n*/
		for (; i < n; i++)
		{
			if (i < n - 1)
				printf("%d, ", array[i]);
			else
				printf("%d", array[i]);
		}

		/*Print new line character '\n'*/
		printf("\n");

		/*binary search algo*/
		mid = ((left + right) / 2);
		if (array[mid] < t)
		{
			left = mid + 1;
			i = left;
			n = right + 1;
		}
		else if (array[mid] > t)
		{
			right = mid - 1;
			i = 0;
			n = mid;
		}
		else
			return (mid);
	}
	return (-1);
}
