#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: memory size being allocated
 *
 * Return: a pointer to the allocated memory,
 * or if malloc fails, malloc_checked should cause normal process termination
 * with a status value of 98
 */

void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
