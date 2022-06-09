#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 *
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes_num = 0;

	if (h == NULL)
		return (nodes_num);

	while (h)
	{
		printf("%i\n", h->n);
		nodes_num++;
		h = h->next;
	}

	return  (nodes_num);
}
