#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a doubly linked list.
 * @head: A pointer to a pointer to the head of list.
 * @n: A value for the new node.
 *
 * Return: A new node on success, NULL on failure.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

	dlistint_t *newNode = malloc(sizeof(*newNode));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = *head;
	if (*head != NULL)
		(*head)->prev = newNode;
	*head = newNode;

	return (newNode);
}
