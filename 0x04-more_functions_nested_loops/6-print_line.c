#include "main.h"
#include <stdio.h>

/**
 * print_line - To print lines
 * @n: input int for number of lines
 *
 * Return: lines
 */

void print_line(int n)
{
while (n-- > 0)
{
putchar('_');
}
putchar('\n');
}
