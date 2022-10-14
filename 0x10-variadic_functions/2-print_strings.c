#include "variadic_functions.h"

/**
 * print_strings - print strings
 * @separator: commas and the likes
 * @n: number of args
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		if (str == NULL)
			str = "(nil)";
		if (i != n - 1)
		{
			if (separator == NULL)
				printf("%s", str);
			else
				printf("%s%s", str, separator);
		}
		else
			printf("%s\n", str);
	}
	va_end(ap);
}

