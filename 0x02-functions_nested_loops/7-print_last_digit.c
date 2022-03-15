#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - prints the last digit of a number
 *
 * @i: parameter for print_last_digit function
 * Return: Value of the last digit
 */

int print_last_digit(int i)
{
	int r;

	r = i % 10;

	if (r < 0)
	{
		r *= -1;
	}

	_putchar(r + '0');

	return (r);
}
