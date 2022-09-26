#include "main.h"

/**
 * _memcpy - function that copies memory area.
 * @dest: Destination
 * @src: source
 * @n: number of mem space to be copied
 *
 * Return: Returns a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
*(dest + i) = src[i];
}
return (dest);
}
