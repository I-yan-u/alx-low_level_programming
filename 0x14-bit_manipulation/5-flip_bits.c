#include "main.h"

/**
 * flip_bits - returns the number of bits to flip number to another
 * @n: first integer
 * @m: second integer
 * Return: number of bits to change (integer)
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int sum;
unsigned long int x_or;

	sum = 0;
	x_or = n ^ m;

	while (x_or)
	{
		sum += x_or & 1;
		x_or = x_or >> 1;
	}

return (sum);
}

