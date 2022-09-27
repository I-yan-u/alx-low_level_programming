#include "main.h"
#define NULL 0

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: the string to be searched
 * @accept: the string to check with
 *
 * Return: The string
 */

char *_strpbrk(char *s, char *accept)
{
int i, j;
for (i = 0; *(s + i) != '\0'; i++)
{
for (j = 0; *(accept + j) != '\0'; j++)
{
if (*(s + i) == *(accept + j))
	return (s + i);
}
}
return (NULL);
}

