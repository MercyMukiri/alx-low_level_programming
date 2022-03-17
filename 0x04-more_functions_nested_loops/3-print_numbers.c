#include "main.h"

/**
 * print_numbers - prints the numbersfrom 0 to 9, followed by a new line
 *
 * Return: void
 */

void print_numbers(void)
{
	char c;

	for (c = 48; c <= 57; c++)
		_putchar(c);

	_putchar('\n');
}
