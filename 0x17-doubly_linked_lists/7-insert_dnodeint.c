#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node in a doubly
 *                            list at a given position.
 * @h: A pointer to the head of the doubly list.
 * @idx: The position to insert the new node.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h, *newNode;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (idx > 1)
	{
		if (current == NULL)
			return (NULL);
		current = current->next;
		idx--;
	}

	if (current->next == NULL)
		return (add_dnodeint_end(h, n));

	newNode = malloc(sizeof(*newNode));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->prev = current;
	newNode->next = current->next;
	current->next->prev = newNode;
	current->next = newNode;

	return (newNode);
}
