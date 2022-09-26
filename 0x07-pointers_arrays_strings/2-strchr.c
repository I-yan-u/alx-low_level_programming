#include "main.h"

/**
 * _strchr - function that copies memory area.
 * @s - source string
 * @c - character to check
 *
 * Return: Returns a pointer
 */

char *_strchr(char *s, char c)
{
int i = 0;
while (*(s + i) != '\0')
{
if (*(s + i) == c)
{
return (s + i);
}
i++;
}
if (*(s + i) == '\0')
{
return (s + i);
}
return (NULL);
}
