#include "main.h"
/**
 * _isupper - To find upper case characters
 * @c: character inputed
 *
 * Return: 0 if lower an 1 if upper
 */
int _isupper(int c)
{
if (c > 64 && c < 91)
{
return (1);
}
else
{
return (0);
}
}
