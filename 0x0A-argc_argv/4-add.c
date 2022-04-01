#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 *
 * @argc: number of arguments passed to the program
 * @argv: an array of pointers to the strings which are those arguments
 *
 * Return: EXIT_SUCCESS on success, EXIT_FAILURE otherwise
 *
 */

int main(int argc, char **argv)
{
	int i, j = 0;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		for  (j = 0; argv[i][j] != '\0'; j++)
		{
			if(!isdigit(argv[i][j]))
			{
				printf("Error\n");
				exit(EXIT_FAILURE);
			}
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	exit(EXIT_SUCCESS);
}
