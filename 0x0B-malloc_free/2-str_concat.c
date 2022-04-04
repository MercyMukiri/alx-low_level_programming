#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to a newly allocated space in memory
 * containing contents of s1, followed by the contents of s2,
 * or NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, s1_len, s2_len, length;
	char *ar;

	if (s1 == NULL)
		return (NULL);

	if (s2 == NULL)
		return (NULL);

	s1_len = 0;

	for (i = 0; s1[i] != '\0'; i++)
		s1_len++;

	s2_len = 0;

	for (j = 0; s2[j] != '\0'; j++)
		s2_len++;

	length = s1_len + s2_len;

	ar = malloc((sizeof(char) * length) + 1);

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
		ar[i] = s1[i];

	j = 0;

	while (i <= length)
	{
		ar[i] = s2[j];
		i++;
		j++;
	}

	return (ar);
}
