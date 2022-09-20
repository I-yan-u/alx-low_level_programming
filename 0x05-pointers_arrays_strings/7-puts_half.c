#include "main.h"

#include <string.h>



/**
 * puts_half - prints a string
 * @str: string to print
 *
 * Return: nothing
 */

void puts_half(char *str)
{
int i, len = strlen(str);
for (i = ((len - 1) / 2) + 1; i < len; i++)
putchar(*(str + i));
putchar(10);
}
