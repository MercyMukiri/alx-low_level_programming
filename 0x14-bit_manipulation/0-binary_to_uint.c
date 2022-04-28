#include "main.h"

/**
 * _strlen - finds the length of a string
 *
 * @s: pointer to a string
 *
 * Return: length of the string
 */

int _strlen(const char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number,
 * or 0 if there is one or more chars in the string b that is not 0 or 1,
 * or if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int i, len;

	if (b == NULL)
		return (0);

	len = _strlen(b);

	for (i = 0; i != len; i++)
	{
		if (b[len - i - 1] == '1')
			n += 1 << i;
		else if (b[len - i - 1] != '0')
			return (0);
	}

	return (n);
}
