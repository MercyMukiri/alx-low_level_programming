#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line
 *
 * @a: parameter for the function print_array
 * @n: parameter for the function print_array
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	n = 0;

	while (*(a + n) != '\0')
	{
		n++;
	}

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));

		if (i < n - 1)
			printf(", ");
	}

	printf("\n");
}
