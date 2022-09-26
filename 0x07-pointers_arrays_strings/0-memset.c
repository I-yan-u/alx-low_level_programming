#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: The pointer to the array.
 * @b: The constant byte.
 * @n: number of times to fill the array.
 *
 * Return: The pointer to the array.
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
s[i] = b;
i++;
}
return (s);
}
