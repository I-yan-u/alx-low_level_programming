#include "main.h"
#include <stdio.h>


/**
 * pow_chkr - checks for the products of @n
 * @n: The number
 * @x: the possible multiplants
 * Return: The square root
 */

int pow_chkr(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	}
	else if (x > n / x)
	{
		return (pow_chkr(n, x - 1));
	}
	else if (x < n / x)
	{
		return (pow_chkr(n, x + 1));
	}
	else
		return (-1);
}


/**
 * _sqrt_recursion - Takes a number and finds
 * its natural square root.
 *
 * @n: the number
 *
 * Return: the natural square root
 */

int _sqrt_recursion(int n)
{
	int x = 1;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
		return (pow_chkr(n, x));

}

