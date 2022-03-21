#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: parameter for the function _strlen
 *
 * Return: Always 0
 */

int _strlen(char *s)
{
	int n = 0;

	while (*(s + n) != '\0')
	{
		n++;
	}

	return (n);
}
