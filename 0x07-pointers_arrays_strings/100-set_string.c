#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 *
 * @s: string parameter for the function set_string
 * @to: char pointer
 *
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
