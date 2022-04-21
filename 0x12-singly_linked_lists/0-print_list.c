#include "lists.h"

/**
 * print_list - prints all element of a list_t list
 *
 * @h: a singly linked list
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t size = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		size++;
	}

	return (size);
}
