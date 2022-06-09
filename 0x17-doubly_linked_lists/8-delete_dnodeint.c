#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index
 * of a dlistint_t linked list
 *
 * @head: double pointer to the head of the list
 * @index: the index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *current;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;
	if (index == 0)
	{
		*head = current->next;
		if (current->next != NULL)
			current->next->prev = NULL;

		free(current);
		return (1);
	}

	for (i = 0; i < index; i++)
	{
		if (current->next == NULL)
			return (-1);

		current = current->next;
	}

	current->prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;
	free(current);

	return (1);
}
