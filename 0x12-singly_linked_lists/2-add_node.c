#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 *
 * @head: head of the linked list
 * @str: new node to add
 *
 * Return: the address of new element, or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t size = 0;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	while (str[size])
		size++;

	new_node->len = size;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
