#include "main.h"

/**
 * _strncat - Joins two strings together
 *
 * @dest: the destination string
 * @src: the source string
 * @n: number of bytes to contain
 *
 * Return: pointer to @dest
 */

char *_strncat(char *dest, char *src, int n)
{
int index = 0, x = 0;
while (dest[index++])
x++;

for (index = 0; src[index] && index < n; index++)
dest[x++] = src[index];

return (dest);


}
