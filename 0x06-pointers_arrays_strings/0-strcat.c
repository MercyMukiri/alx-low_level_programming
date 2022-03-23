#include "main.h"

/**
 * *_strcat - concatenates two strings
 *
 * @dest: parameter for the function _strcat
 * @src: parameter for the function _strcat
 *
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	while (j >= 0)
	{
		*(dest + i) = *(src + j);

		if (*(src + j) == '\0')
			break;
		i++;
		j++;
	}

	return (dest);
}
