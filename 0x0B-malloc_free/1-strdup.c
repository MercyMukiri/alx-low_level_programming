#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 *
 * @str: string parameter to be duplicated
 *
 * Return: a pointer to the duplicated string,
 * or NULL if there was insufficient memory
 */

char *_strdup(char *str)
{
	unsigned int i, str_len;
	char *ar;

	if (str == NULL)
		return (NULL);

	str_len = 0;

	for (i = 0; str[i] != '\0'; i++)
		str_len++;

	ar = malloc(sizeof(char) * (str_len + 1));

	if (ar == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		ar[i] = str[i];

	return (ar);
}
