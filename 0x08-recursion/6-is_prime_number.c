#include "main.h"

/**
 * prime_check - checks a prime number
 *
 * @x: the number
 * @y: the iter
 *
 * Return: 1 if prime, 0 if not.
 */


int prime_check(int x, int y)
{
	if (x % y == 0)
	{
		return (0);
	}
	if (y == x / 2)
	{
		return (1);
	}
	return (prime_check(x, (y + 1)));
}


/**
 * is_prime_number - checks a prime number
 *
 * @n: the number
 *
 * Return: 1 if prime, 0 if not.
 */

int is_prime_number(int n)
{
	int start = 2;

	if (n < 2)
	{
		return (0);
	}
	else
	{
		return (prime_check(n, start));
	}
}


