#include "main.h"

/**
 * _realloc - This function reallocates a space in memory
 * @ptr: The pointer to the formerly allocated space
 * @old_size: The previous size in bytes
 * @new_size: New size in bytes
 *
 * Return: The newly allocated space
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	free (ptr);

	ptr = malloc(new_size);
	return (ptr);

}

