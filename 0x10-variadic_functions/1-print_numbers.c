#include "variadic_functions.h"

/**
 * print_numbers - Prints args passed to function
 * @separator: the comma
 * @n: the amount of args
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int num;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(ap, int);
		if (separator == NULL)
		{
			if (i == n - 1)
				printf("%d\n", num);
			else
				printf("%d", num);
		}
		else
		{
			if (i < (n - 1))
				printf("%d%s", num, separator);
			else
				printf("%d\n", num);
		}
	}
	va_end(ap);
}

