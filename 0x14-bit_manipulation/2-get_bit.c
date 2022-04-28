#include "main.h"

/**
 * get_bit - return the value of a bit at a given index
 *
 * @n: the decimal number
 * @index: the index of the bit you want to get, starting from 0
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit;

	if (index > 64)
		return (-1);

	bit = n >> index;

	return (bit & 0x1);
}
