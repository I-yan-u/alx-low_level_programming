#include "main.h"
/**
 * print_rev - prints a string reversed
 * @s: string to print
 *
 * Description: prints a string
 * On success: returns no error
 */

void print_rev(char *s)
{
int p = _strlen(s);
int i = p - 1;
while (*(s + i) != '\0')
{
_putchar(*(s + i));
i--;
}
_putchar(10);
}
