#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: input string
 * Return: encoded string
 */
char *rot13(char *s)
{
	int i;

	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *str = s;

	while (*s)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*s == alpha[i])
			{
				*s = ROT13[i];
				break;
			}
		}
		s++;
	}
	return (str);
}
