#include "main.h"

/**
 * print_binary - prints integer numbers in base2
 * @n: the integer number
 *
 * Return: void.
 */

void print_binary(unsigned long int n)
{
	int on, i;
	unsigned long int x;

	on = 0;
	for (i = 63; i >= 0; i--)
	{
		x = (n >> i) & 1;

		if (x == 1)
			on = 1;

		if (on == 1)
			putchar(x + '0');
	}

	if (n == 0)
		putchar('0');
}

