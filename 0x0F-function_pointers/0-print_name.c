#include "function_pointers.h"

/**
 * print_name - assing a name to a function and prints the outcome
 * @name: The name
 * @f: The function
 *
 * Return: name
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}

