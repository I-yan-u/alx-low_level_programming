#include <stdio.h>

/**
 * _strstr- searches a string for any of a set of bytes.
 * @haystack: the string to be searched
 * @needle: the string to check with
 *
 * Return: The string
 *
 */

char *_strstr(char *haystack, char *needle)
{
int i, j, start;
int len = 0;
while (needle[len] != '\0')
{
len++;
}
for (i = 0; haystack[i] != '\0'; i++)
{
for (j = 0; j < len && haystack[i] == needle[j]; j++, i++)
{
if (j == 0)
{
start = i;
}
if (j == len - 1)
{
return (haystack + start);
}
}
}
return (0);
}

