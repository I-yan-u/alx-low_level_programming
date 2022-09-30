#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of args passed to the prog
 *
 * @argc: The number of args passed to the programs
 * @argv: The array of args
 *
 * Return: 0
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	int i = argc - 1;

	printf("%d\n", i);
	return (0);
}

