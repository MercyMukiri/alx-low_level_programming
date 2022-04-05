#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * word_count - counts the number of words in a string
 *
 * @str: string parameter
 *
 * Return: number of words in the string
 */

int word_count(char *str)
{
	int i, len = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ')
		{
			if (str[i + 1] != ' ' && str[i + 1] != '\0')
				len++;
		}
		else if (i == 0)
			len++;
	}

	len++;

	return (len);
}

/**
 * strtow - splits a string into words
 *
 * @str: string being split
 *
 * Return: a pointer to an array of strings (words), or NULL if it fails
 */

char **strtow(char *str)
{
	int i, j, k, l, words, wc = 0;
	char **ptr;

	if (str == NULL || *str == '\0')
		return (NULL);
	words = word_count(str);
	if (words == 1)
		return (NULL);
	ptr = (char **)malloc(sizeof(char *) * words);
	if (ptr == NULL)
		return (NULL);
	ptr[words - 1] = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			ptr[wc] = (char *)malloc(sizeof(char) * j);
			j--;
			if (ptr[wc] == NULL)
			{
				for (k = 0; k < wc; k++)
					free(ptr[k]);
				free(ptr[words - 1]);
				free(ptr);
				return (NULL);
			}
			for (l = 0; l < j; l++)
				ptr[wc][l] = str[i + l];
			ptr[wc][l] = '\0';
			wc++;
			i += j;
		}
		else
			i++;
	}
	return (ptr);
}
