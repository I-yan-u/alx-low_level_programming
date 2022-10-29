#include "main.h"

/**
 * slen - finds lenght of a string.
 * @str: The string
 * Return: Lenght of the string.
 */

int slen(const char *str)
{
	int count = 0;

	while (str[count] != '\0')
		count++;

	return (count);
}

/**
 * c_i - changes number-characters to decimal integers
 * @c: The number in character form
 * Return: The decimal integer of the character.
 */

unsigned int c_i(char c)
{
	int i = 0;

	if (c >= '0' && c <= '9')
	{
		i = c - '0';
		return (i);
	}
	return (0);
}

/**
 * _pow - To raise a number by a certain exponent
 * @num: The number to be raised
 * @raised: The exponent
 *
 * Return: num ^ raised.
 */

unsigned int _pow(unsigned int num, unsigned int raised)
{
	unsigned int i, sol = 1;

	for (i = 0; i < raised; i++)
	{
		sol *= num;
	}
	return (sol);
}

/**
 * binary_to_uint - converts a number(char) to int.
 * @b: The number(char)
 *
 * Return: The decimal (int)number.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	int i, len;

	if (b == NULL)
		return (sum);

	len = slen(b);
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		sum += (c_i(b[i]) * _pow(2, len - i - 1));
	}
	return (sum);
}


