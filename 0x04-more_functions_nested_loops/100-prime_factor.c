#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143,
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int i, j, k;

	j = 612852475143;

	for (i = 2; i <= j; i++)
	{
		if ((j % i) == 0)
		{
			j = j / i;
			k = i;
		}
	}

	printf("%ld\n", k);

	return (0);
}
