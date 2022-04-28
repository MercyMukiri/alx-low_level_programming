#include "main.h"

/**
 * clear_bit - sets the value of a but to 0 at a given index
 *
 * @n: decimal number
 * @index: the index of the bit you want to set, starting from 0
 *
 * Return: 1 if it worked, or -1 if an error occured
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
