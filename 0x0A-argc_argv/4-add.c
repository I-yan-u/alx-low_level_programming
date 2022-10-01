#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * is_num - confirms if its a number
 * @s: the argument from command line
 *
 * Return: return 1 if a number and 0 is not a number
 */

int is_number(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) >= '0' && *(s + i) <= '9')
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}


/**
 * main - add all given integer arguments
 * @argc: The number of arguments
 * @argv: The array of arguments
 *
 * Return: The sum of the given args
 */

int main(int argc, char *argv[])
{
int i, sum = 0, is_num;

if (argc < 2)
{
	printf("0\n");
}
else if (argc >= 2)
{
	i = 1;
	while (i < argc)
	{
		is_num = is_number(argv[i]);
		if (is_num == 1)
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", sum);
}
return (0);
}

