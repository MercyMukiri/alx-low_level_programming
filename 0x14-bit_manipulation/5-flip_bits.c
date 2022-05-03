#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 *
 * @n: the decimal number
 * @m: the decimal number being compared with
 *
 * Return: the number of bits needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;

	i = 0;
	n = n ^ m;

	while (n)
	{
		i += n & 1;
		n >>= 1;
	}

	return (i);
}