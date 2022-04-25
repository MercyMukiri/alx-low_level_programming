#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 *
 * @head: head of the list
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr, *next_node;

	ptr = NULL;
	next_node = NULL;

	while (*head != NULL)
	{
		next_node = (*head)->next;
		(*head)->next = ptr;
		ptr = *head;
		*head = next_node;
	}

	*head = ptr;

	return (*head);
}
