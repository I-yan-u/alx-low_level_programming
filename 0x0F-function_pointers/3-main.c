#include "3-calc.h"

/**
 * main - The main function
 *
 * @argc: number of args passed to program
 * @argv: Array of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a, b, result;
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op = get_op_func(argv[2]);
	if (op == NULL)
	{
		printf("Error\n");
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	result = op(a, b);

	printf("%d\n", result);

	return (0);


}

