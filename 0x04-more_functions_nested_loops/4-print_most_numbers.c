#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - To find prouct of numbers
 *
 * Return: numbers from 0-10
 */

void print_most_numbers(void)
{
int i = 48;
while (i < 58)
{
if (i == 50 || i == 52)
{
i++;
}
else
{
_putchar(i);
i++;
}
}
_putchar(10);
}
