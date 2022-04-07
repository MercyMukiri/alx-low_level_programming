#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 *
 * @min: first value in the array
 * @max: last value in the array
 *
 * Return: the pointer to the newly created array,
 * or NULL if min > max, or if malloc fails
 */

int *array_range(int min, int max)
{
	unsigned int i;
	int *ptr;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(*ptr) * (max - min + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		*(ptr + i) = min;

	return (ptr);
}
