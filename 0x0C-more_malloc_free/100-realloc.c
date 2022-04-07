#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 *
 * @ptr: a pointer to the memory previously allocated with a call to malloc
 * @old_size: the size of the allocated space for ptr in bytes
 * @new_size: the new size of the new memory block in bytes
 *
 * Return: void
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (old_size == new_size)
		return (ptr);

	free(ptr);

	ptr = malloc(new_size);

	return (ptr);
}
