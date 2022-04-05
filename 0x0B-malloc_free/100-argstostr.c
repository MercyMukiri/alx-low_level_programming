#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 *
 * @ac: argument count
 * @av: argument vector
 *
 * Return: a pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int i, j;
	int count = 0;
	int len = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return ('\0');

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;

		len++;
	}

	ptr = malloc((sizeof(char) * len) + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			ptr[count++] = av[i][j];

		ptr[count++] = '\n';
	}

	return (ptr);
}
