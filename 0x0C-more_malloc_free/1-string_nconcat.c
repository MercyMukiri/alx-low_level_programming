#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from s2
 *
 * Return: pointer to a newly allocated space in memory
 * containin s1, followed by the first n bytes of s2,
 * or NULL on failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, s1_len, s2_len, length;
	char *ptr;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	s1_len = 0;

	for (i = 0; s1[i] != '\0'; i++)
		s1_len++;

	s2_len = 0;

	for (i = 0; s2[i] != '\0'; i++)
		s2_len++;

	if (n >= s2_len)
		n = s2_len;

	length = s1_len + n;

	ptr = malloc((sizeof(char) * length) + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
		ptr[i] = s1[i];

	for (j = 0; i <= length; i++, j++)
		ptr[i] = s2[j];

	ptr[i] = '\0';

	return (ptr);
}
