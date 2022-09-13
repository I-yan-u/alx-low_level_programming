#include "main.h"

/**
 * print_alphabet - To print out alphabets
 *
 * Return: void
 */

void print_alphabet(void)
{
char alpha;
alpha = 'a';

for (alpha <= 'z'; alpha++;)
{
_putchar(alpha);
}
_putchar("\n");
}
