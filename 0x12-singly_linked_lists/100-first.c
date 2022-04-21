#include "lists.h"

/**
 * before_main - function to print before the main function is executed
 *
 * Return: void
 */

void __attribute__ ((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,\n%s",
	       "I bore my house upon my back!\n");
}
