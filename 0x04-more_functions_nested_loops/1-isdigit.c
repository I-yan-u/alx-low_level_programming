#include <stdio.h>
/**
 * _isdigit - To find numbers
 * @c: character inputed
 *
 * Return: 0 not a number, 1 is a number
 */
int _isdigit(int c)
{
if (c > 47 && c < 58)
{
return (1);
}
else
{
return (0);
}
}
