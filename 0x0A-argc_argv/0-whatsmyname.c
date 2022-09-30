#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 *
 * @argc: The argument count of the program
 * @argv: The argument strings
 *
 * Return: 0
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}

