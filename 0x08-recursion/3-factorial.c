#include "main.h"

/**
 * factorial - To find the factorial of the n number.
 * @n: The number to find factorial
 *
 * Return: the result.
 */


int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 1)
{
return (1);
}
return (n * factorial(n - 1));
}

