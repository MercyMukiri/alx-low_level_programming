#include "main.h"

/**
 * square_root - returns square root of a number
 *
 * @i: parameter for the function square_root
 * @j: parameter for the function square_root
 *
 * Return: square root of the number
 */

int square_root(int i, int j)
{
	if (i * i == j)
		return (i);
	if (i * i > j)
		return (-1);

	return (square_root(i + 1, j));
}

/**
 * _sqrt_recursion - returns the natural square root of a  number
 *
 * @n: number
 *
 * Return: natural square root of n
 * or -1 if n does not have a natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);

	return (square_root(1, n));
}
