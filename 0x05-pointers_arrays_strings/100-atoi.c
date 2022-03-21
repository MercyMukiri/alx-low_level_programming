#include "main.h"

/**
 * _atoi - convert a string to an integer
 * Description - The number in the string can be preceded
 * by an infinite number of characters.
 * You need to take into account all the - and + signs before the number
 * If there are no numbers in the string, the function must return 0
 *
 * @s: parameter for function _atoi
 *
 * Return: res
 */

int _atoi(char *s)
{
	int i;
	int res = 0;
	int sig = -1;
	int brk = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sig = sig * -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			res = res * 10;
			res -= (s[i] - '0');
			brk = 1;
		}
		else if (brk == 1)
			break;
	}

	res = sig * res;

	return (res);
}
