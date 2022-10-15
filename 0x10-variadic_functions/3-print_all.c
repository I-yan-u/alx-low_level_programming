#include "variadic_functions.h"

/**
 * print_c - prints characters
 * @arg: the arguments
 */

void print_c(va_list arg)
{
	printf("%c", va_arg(arg, int));
}

/**
 * print_i - prints integers
 * @arg: the arguments
 */

void print_i(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

/**
 * print_f - print float and double numbers
 * @arg: the arguments
 */

void print_f(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

/**
 * print_s - prints strings
 * @arg: the arguments
 */

void print_s(va_list arg)
{
	char *s = va_arg(arg, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_all - prints any arg passed to it
 * @format: The string that contains the format
 *
 */

void print_all(const char * const format, ...)
{
	va_list arg;
	unsigned int i, j;
	char *s1 = "";
	char *s2 = ", ";

	fmt form[] = {
		{'c', print_c},
		{'i', print_i},
		{'s', print_s},
		{'f', print_f},
		{'\0', NULL}
	};

	va_start(arg, format);

	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (form[j].c != '\0')
		{
			if (form[j].c == format[i])
			{
				printf("%s", s1);
				form[j].f(arg);
				s1 = s2;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(arg);
}

