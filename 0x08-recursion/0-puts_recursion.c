#include "main.h"


/**
 * _puts_recursion - send character to stdout
 * @s: the string to be checked
 *
 *
 * Return: tthe string
 */


void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
	_putchar(*(s + 0));
	_puts_recursion((s + 1));
	}
	else
	{
		_putchar('\n');
		return;
	}
}

