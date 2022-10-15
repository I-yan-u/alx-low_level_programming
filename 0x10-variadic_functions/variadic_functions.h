#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct fmt - A struct consisting of a char and *f
 * @c: character
 * @f: pointer to function
 */
typedef struct fmt
{
	char c;
	void (*f)(va_list);
}fmt;

int _putchar(int c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
