#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a doubly linked list.
 * @head: A pointer to a pointer to the head of list.
 * @n: A value for the new node.
 *
 * Return: A new node on success, NULL on failure.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *last;

	newNode	= malloc(sizeof(*newNode));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}

	last = *head;
	while (last->next != NULL)
		last = last->next;

	last->next = newNode;
	newNode->prev = last;

	return (newNode);
}
