#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int str_len(char *str);
char *x_array(int size);
char *zero_iteration(char *str);
int convert_to_digit(char str);
void product(char *prod, char *mul, int digit, int zeroes);
void num_add(char *final_prod, char *next_prod, int next_len);

/**
 * str_len - returns the length of a string
 *
 * @str: string parameter
 *
 * Return: the string length
 *
 */

int str_len(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	return (i);
}

/**
 * x_array - creates an array and initializes its value to x
 *
 * @size: size of the array to be initialised
 *
 * Return: a pointer to the array
 */

char *x_array(int size)
{
	int i;
	char *arr;

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		exit(98);

	for (i = 0; i < (size - 1); i++)
		arr[i] = 'x';

	arr[i] = '\0';

	return (arr);
}

/**
 * zero_iteration - iterates through a given number of zeroes
 *
 * @str: string parameter to be iterated
 *
 * Return: a pointer to the next non-zero element
 */

char *zero_iteration(char *str)
{
	while (*str && *str == '0')
		str++;

	return (str);
}

/**
 * convert_to_digit - converts character to an integer
 *
 * @str: string of characters
 *
 * Return: converted integer
 */

int convert_to_digit(char str)
{
	int digit = str - '0';

	if (digit < 0 || digit > 9)
	{
		printf("Error\n");
		exit(98);
	}

	return (digit);
}

/**
 * product - multiplies a string of numbers by a single digit
 *
 * @prod: stores the multiplied result
 * @mul: a string of numbers
 * @digit: a single digit
 * @zeroes: leading zeroes
 *
 * Return: void
 */

void product(char *prod, char *mul, int digit, int zeroes)
{
	int mul_len, num, tens = 0;

	mul_len = str_len(mul) - 1;
	mul += mul_len;

	while (*prod)
	{
		*prod = 'x';
		prod++;
	}

	prod--;

	while (zeroes--)
	{
		*prod = '0';
		prod--;
	}

	for (; mul_len >= 0; mul_len--, prod--, mul--)
	{
		if (*mul < '0' || *mul > '9')
		{
			printf("Error\n");
			exit(98);
		}

		num = (*mul - '0') * digit;
		num += tens;
		*prod = (num % 10) + '0';
		tens = num / 10;
	}

	if (tens)
		*prod = (tens % 10) + '0';
}

/**
 * num_add - adds numbers stored in two strings
 *
 * @final_prod: stores the final product
 * @next_prod: holds the next product to be added
 * @next_len: gives the length of @next_prod
 *
 * Return: void
 */

void num_add(char *final_prod, char *next_prod, int next_len)
{
	int num, tens;

	tens = 0;

	while (*(final_prod + 1))
		final_prod++;

	while (*(next_prod + 1))
		next_prod++;

	for (; *final_prod != 'x'; final_prod--)
	{
		num = (*final_prod - '0') + (*next_prod - '0');
		num += tens;
		*final_prod = (num % 10) + '0';
		tens = num / 10;
		next_prod--;
		next_len--;
	}

	for (; next_len >= 0 && *next_prod != 'x'; next_len--)
	{
		num = (*next_prod - '0');
		num += tens;
		*final_prod = (num % 10) + '0';
		tens = num / 10;
		final_prod--;
		next_prod--;
	}

	if (tens)
		*final_prod = (tens % 10) + '0';
}

/**
 * main - multiplies two positive numbers and prints the result
 *
 * @argc: number of arguments provided in the command line
 * @argv: an array of pointers to the strings which are those arguments
 *
 * Return: EXIT_SUCCESS on success, EXIT_FAILURE otherwise
 */

int main(int argc, char **argv)
{
	char *final_prod, *next_prod;
	int i, size, digit, zeroes = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (*(argv[1]) == '0')
		argv[1] = zero_iteration(argv[1]);

	if (*(argv[2]) == '0')
		argv[2] = zero_iteration(argv[2]);

	if (*(argv[1]) == '\0' || *(argv[2]) == '\0')
	{
		printf("0\n");
		return (0);
	}

	size = str_len(argv[1]) + str_len(argv[2]);
	final_prod = x_array(size + 1);
	next_prod = x_array(size + 1);

	for (i = str_len(argv[2]) - 1; i >= 0; i--)
	{
		digit = convert_to_digit(*(argv[2] + i));
		product(next_prod, argv[1], digit, zeroes++);
		num_add(final_prod, next_prod, size - 1);
	}

	for (i = 0; final_prod[i]; i++)
	{
		if (final_prod[i] != 'x')
			putchar(final_prod[i]);
	}

	putchar('\n');
	free(next_prod);
	free(final_prod);

	return (0);
}
