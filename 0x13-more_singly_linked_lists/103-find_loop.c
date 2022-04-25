#include "lists.h"

/**
 * find_common_node - finds a common node in a looped linked list
 *
 * @hare: faster incrementing pointer
 * @tortoise: slower incrementing pointer
 *
 * Return: the address to the common node, otherwise NULL
 */

listint_t *find_common_node(listint_t *hare, listint_t *tortoise)
{
	while (hare && tortoise && hare->next)
	{
		hare = hare->next->next;
		tortoise = tortoise->next;

		if (hare == tortoise)
			return (tortoise);
	}

	return (NULL);
}


/**
 * find_listint_loop - finds the loop in a linked list
 *
 * @head: a pointer to the head of the list
 *
 * Return: the address of the node where the loop starts,
 * or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *hare = head, *tortoise = head;

	tortoise = find_common_node(hare, tortoise);

	if (tortoise == NULL)
		return (NULL);

	hare = head;

	while (hare != tortoise)
	{
		hare = hare->next;
		tortoise = tortoise->next;
	}

	return (hare);
}
