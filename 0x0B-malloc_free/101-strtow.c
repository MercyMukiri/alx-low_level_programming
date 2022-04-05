#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * word_len - finds the length of a word
 *
 * @str: string parameter
 *
 * Return: length of the string
 */

int word_len(char *str)
{
	int i = 0, len = 0;

	while (*(str + i) && *(str + i) != ' ')
	{
		len++;
		i++;
	}

	return (len);
}

/**
 * word_count - counts the number of words in a string
 *
 * @str: string parameter
 *
 * Return: number of words  in the string
 */

int word_count(char *str)
{
	int i = 0, len = 0, count = 0;

	for (i = 0; *(str + i) != '\0'; i++)
		len++;

	for (i = 0; i < len; i++)
	{
		if (*(str + i) != ' ')
		{
			count++;
			i += word_len(str + i);
		}
	}

	return (count);
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
	int i, j, k, words, letters;
	char **ptr;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = word_count(str);

	if (words == 0)
		return (NULL);

	ptr = malloc(sizeof(char *) * (words + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < words; i++)
	{
		while (*(str + j) == ' ')
			j++;

		letters = word_len(str + j);

		ptr[i] = malloc(sizeof(char) * (letters + 1));

		if (ptr[i] == NULL)
		{
			for (; i >= 0; i--)
				free(ptr[i]);
			free(ptr);
			return (NULL);
		}

		for (k = 0; k < letters; k++)
			ptr[i][k] = str[j++];
	}

	return (ptr);
}
