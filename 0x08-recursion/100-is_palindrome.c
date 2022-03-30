#include "main.h"

/**
 * str_len - checks size of string
 *
 * @s: pointer to string parameter
 *
 * Return: int
 */

int str_len(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + str_len(++s));
}

/**
 * palindrome - checks the palindrome
 *
 * @s: pointer to string
 * @l: position
 *
 * Return: int
 */

int palindrome(char *s, int l)
{
	if (l < 1)
	{
		return (1);
	}

	if (*s == *(s + l))
	{
		return (palindrome(s + 1, l - 2));
	}

	return (0);
}

/**
 * is_palindrome - checks if a string is a palindrome
 *
 * @s: string to check
 *
 * Return: recursion
 */

int is_palindrome(char *s)
{
	int len = str_len(s);

	return (palindrome(s, len - 1));
}
