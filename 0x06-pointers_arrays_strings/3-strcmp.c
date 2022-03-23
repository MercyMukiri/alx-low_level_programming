#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: an integer less than, equal to, or greater than zero
 * if s1 is found, respectively, to be less than, to match,
 * or be greater than s2
 */

int _strcmp(char *s1, char *s2)
{
	int i, r;

	i = 0;

	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
		i++;

	r = s1[i] - s2[i];

	return (r);
}
