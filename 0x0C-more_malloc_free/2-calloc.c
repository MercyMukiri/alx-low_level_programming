#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 *
 * @nmemb: number of elements in the array
 * @size: number of bytes of each element in the array
 *
 * Return: a pointer to the allocated memory,
 * or NULL if nmemb or size is 0, or if malloc fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		*(ptr + i) = 0;

	return (ptr);
}
