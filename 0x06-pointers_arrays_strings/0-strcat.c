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
int a = 0, x = 0;
while (dest[a++])
x++;

for (int a = 0; src[a]; a++)
dest[x++] = src[a];

return (dest);


}
