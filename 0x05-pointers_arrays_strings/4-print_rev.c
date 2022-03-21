#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 *
 * @s: parameter for the function print_rev
 *
 * Return: void
 */

void print_rev(char *s)
{
	int n;

	n = 0;

	while (*(s + n) != '\0')
	{
		n++;
	}

	n = n - 1;

	while (n >= 0)
	{
		_putchar(s[n]);
		n--;
	}

	_putchar('\n');
}
