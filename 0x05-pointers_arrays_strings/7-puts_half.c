#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * Description - The function should print the second half of the string
 * If the number of characters is odd,
 * the function should print the last n characters of the string,
 * where n = (length_of_the_string - 1) / 2
 *
 * @str: parameter for the puts_half function
 *
 * Return: void
 */

void puts_half(char *str)
{
	int length_of_the_string, n;

	length_of_the_string = 0;

	while (*(str + length_of_the_string) != '\0')
	{
		length_of_the_string++;
	}

	if (length_of_the_string % 2 == 0)
	{
		n = length_of_the_string / 2;
	}
	else
	{
		n = ((length_of_the_string - 1) / 2) + 1;
	}

	for (; n < length_of_the_string; n++)
	{
		_putchar(str[n]);
	}

	_putchar('\n');
}
