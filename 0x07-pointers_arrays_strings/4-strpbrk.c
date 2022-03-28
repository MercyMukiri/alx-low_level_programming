#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s: string parameter
 * @accept: string being searched for bytes
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;
	char *p;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				p = &s[i];

				return (p);
			}
		}
	}

	return ('\0');
}
