#include "main.h"
/**
 * print_last_digit - print last number
 * @n: the variable to be inputed
 *
 * Return: x: the last number
 */
int print_last_digit(int n)
{
int x = n % 10;
if (x < 0)
x *= -1;
_putchar(x + '0');
return (x);
}
