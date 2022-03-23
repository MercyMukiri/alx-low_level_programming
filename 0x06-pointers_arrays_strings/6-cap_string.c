#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 *
 * @s: string parameter
 *
 * Return: pointer to the modified string
 */

char *cap_string(char *s)
{
	int i, j;
	char delimeters[] = " \t\n,;.!?\"(){}";

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[0] >= 'a' && s[0] <= 'z')
			s[0] -= 32;
				for (j = 0; delimeters[j] != '\0'; j++)
					if (s[i] == delimeters[j] && s[i + 1]
					    >= 'a' && s[i + 1] <= 'z')
						s[i + 1] -= 32;
	}
	return (s);
}
