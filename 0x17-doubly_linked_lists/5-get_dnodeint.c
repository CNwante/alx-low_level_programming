#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a doubly linked list.
 * @head: A pointer to the head of the dlistint_t list.
 * @index: The specified node to locate.
 *
 * Return: Address of the node if it exist.
 *         Otherwise, NULL if index out of range.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (head != NULL && index > 0)
	{
		head = head->next;
		index--;
	}

	return (head);
}
