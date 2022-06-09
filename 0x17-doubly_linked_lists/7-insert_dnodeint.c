#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 *
 * @h: double pointer to the head of the list
 * @idx: index of the list where the new node should be added
 * @n: integer value to be added to the new node
 *
 * Return: address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new_node, *current, *next;

	if (h == NULL)
		return (NULL);

	if (idx != 0)
	{
		current = *h;
		for (i = 0; i < idx - 1 && current != NULL; i++)
			current = current->next;

		if (current == NULL)
			return (NULL);
	}

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		next = *h;
		*h = new_node;
		new_node->prev = NULL;
	}
	else
	{
		new_node->prev = current;
		next = current->next;
		current->next = new_node;
	}

	new_node->next = next;
	if (new_node->next != NULL)
		new_node->next->prev = new_node;

	return (new_node);
}
