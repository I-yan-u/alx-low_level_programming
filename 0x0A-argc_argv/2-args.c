#include "main.h"
#include <stdio.h>

/**
 * main - Print string of arguments
 *
 * @argc: The number of arguments
 * @argv: The array of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
int i = 0;

while (i < argc)
{
	printf("%s\n", argv[i]);
	i++;
}
return (0);
}

