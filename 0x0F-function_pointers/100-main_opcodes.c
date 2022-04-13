#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - print the opcodes for this program
 *
 * @a: address of the main function
 * @n: number of bytes to print
 *
 * Return: void
 */

void print_opcodes(char *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", a[i]);
		if (i < n - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - Prints the opcodes of this function
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 (SUCCESS)
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	i = atoi(argv[1]);

	if (i < 0)
	{
		printf("Error\n");
		exit(2);
	}

	print_opcodes((char *)&main, i);

	return (0);
}
