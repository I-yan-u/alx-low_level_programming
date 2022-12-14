#include "main.h"

/**
 * malloc_checked - To check the space allocated
 * @b: The size to be allocated
 *
 * Return: The pointer to the allocated space
 *
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}

