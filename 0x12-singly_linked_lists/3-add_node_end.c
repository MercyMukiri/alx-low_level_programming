#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 *
 * @head: head of the linked list
 * @str: new node to be added
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	size_t size = 0;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	while (str[size])
		size++;

	new_node->len = size;
	new_node->next = NULL;

	temp = *head;

	if (temp == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (temp->next)
			temp = temp->next;
		temp->next = new_node;
	}

	return (*head);
}
