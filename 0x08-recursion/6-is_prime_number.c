#include "main.h"

/**
 * prime_number - checks if a number is a prime number
 *
 * @i: parameter for the function prime-number
 * @j: input integer
 *
 * Return: 0
 */

int prime_number(int i, int j)
{
	if (j % i == 0)
		return (0);
	else if (j / 2 > i)
		return (prime_number(i + 2, j));
	else
		return (1);
}

/**
 * is_prime_number - checks if a number is a prime number
 *
 * @n: input integer
 *
 * Return: 1 if the input integer is a prime number, otherwise 0
 */

int is_prime_number(int n)
{
	if ((!(n % 2) && n != 2) || n < 2)
		return (0);

	return (prime_number(3, n));
}
