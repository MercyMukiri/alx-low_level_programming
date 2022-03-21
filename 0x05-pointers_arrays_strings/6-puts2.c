#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by a new line.
 *
 * @str: parameter for the puts2 function
 *
 * Return : void
 */

void puts2(char *str)
{
	int n, i;

	n = 0;

	while (*(str + n) != '\0')
	{
		n++;
	}

	for (i = 0; i < n; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
