#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguments it receives
 *
 * @argc: number of arguments provided in the command line
 * @argv: an array of pointers to the strings which are those arguments
 *
 * Return: EXIT_SUCCESS on success, EXIT_FAILURE otherwise
 */

int main(int argc, __attribute__((unused)) char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);

	exit(EXIT_SUCCESS);
}
