#include "main.h"
#include <stdio.h>
#include "stdlib.h"

/**
 * main - to multiply the argumernts
 * @argc: The number of arguments
 * @argv: The array of arguments
 *
 *
 * Return: The product of the arguments provided
 */

int main(int argc, char *argv[])
{
if (argc <= 2 || argc > 3)
{
	printf("Error\n");
	return (0);
}
else
{
	int mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);
}
return (0);
}

