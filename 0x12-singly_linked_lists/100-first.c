#include "lists.h"

void __attribute__ ((constructor)) beforeMain();

/**
 * bmain - prints text before main
 *
 * Return: void
 */

void beforeMain(void)
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}

