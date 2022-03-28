#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *
 * @s: pointer parameter
 * @b: constant byte that fills the memory area
 * @n: number of bytes of the memory
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;

	return (s);
}
