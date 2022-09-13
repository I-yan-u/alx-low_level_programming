#include "main.h"

/**
 * print_alphabet_x10 - To print out alphabets 10x
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
char c;
int x = 0;
while (x < 11)
{

for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}

_putchar('\n');
x++;
}

}
