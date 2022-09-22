#include "main.h"

/**
 * _strcat - Joins two strings together
 *
 * @dest: the destination string
 * @src: the source string
 *
 * Return: pointer to @dest
 */

char *_strcat(char *dest, char *src)
{
int index = 0, x = 0;
while (dest[index++])
x++;

for (index = 0; src[index]; index++)
dest[x++] = src[index];

return (dest);


}
