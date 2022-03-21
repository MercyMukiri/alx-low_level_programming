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

	if (n > 0)
	{
		for (i = 0 ; n > i; i++)
		{
			if (i != n - 1)
			{
				printf("%d, ", a[i]);
			}
			else
			{
				printf("%d", a[i]);
			}
		}
	}

	printf("\n");
}
