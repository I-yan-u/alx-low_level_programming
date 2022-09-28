#include "main.h"

/**
 * _strlen_recursion - To measure lenght of string.
 * @s: the string to be measured
 *
 * Return: The lenght of the string
 */


int _strlen_recursion(char *s)
{
int len = 0;
int i = 0;
if (*(s + i) == '\0')
{
return (0);
}
i++;
len++;
return (len + _strlen_recursion(s + i));
}

