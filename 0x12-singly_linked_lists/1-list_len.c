#include "lists.h"

/**
 * list_len - prints the number of elements in a linked list_t list
 *
 * @h: singly linked list
 *
 * Return: number of elements in a linked list
 */

size_t list_len(const list_t *h)
{
	size_t size = 0;

	while (h)
	{
		h = h->next;
		size++;
	}

	return (size);
}
