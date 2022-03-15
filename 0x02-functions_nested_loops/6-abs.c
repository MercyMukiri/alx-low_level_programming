#include "main.h"
#include <stdlib.h>

/**
 * _abs - computes the absolute value of an integer
 *
 * @i: parameter for the _abs function
 * Return: r
 */

int _abs(int i)
{
	int r;

	r = i * ((i > 0) - (i < 0));

	return (r);
}
