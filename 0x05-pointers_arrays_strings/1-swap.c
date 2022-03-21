#include "main.h"

/**
 * swap_int -  swaps the values of two integers
 *
 * @a: parameter for the function swap_int
 * @b: parameter for the function swap_int
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
