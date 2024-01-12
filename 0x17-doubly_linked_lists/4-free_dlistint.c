#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - Frees memory allocated to a doubly linked list.
 * @head: A pointer to the head of dlistint_t list.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;

	while (node->next != NULL)
	{
		node = node->next;
		free(node->prev);
	}

	free(node);
}
