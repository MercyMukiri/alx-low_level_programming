#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 *
 * @h: double pointer to the head of the list
 *
 * Return: the size of the list that was free'd
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *temp, *actual;
	size_t size = 0;
	int rest;

	actual = *h;

	while (actual != NULL)
	{
		rest = actual - actual->next;

		if (rest > 0)
		{
			temp = actual->next;
			free(actual);
			actual = temp;
			size++;
		}
		else
		{
			free(actual);
			*h = NULL;
			size++;
			break;
		}

	}

	*h = NULL;

	return (size);
}
