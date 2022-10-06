#include "main.h"
#include <stdio.h>
#include <sdtlib.h>

/**
 * malloc_checked - To check the space allocated
 * @b: The size to be allocated
 *
 * Return: The pointer to the allocated space
 *
 */

void *malloc_checked(unsigned int b)
{
	void *checker;

	checker = malloc(b);
	if (checker == NULL)
	{
		exit(98);
	}
	return (checker);

}

