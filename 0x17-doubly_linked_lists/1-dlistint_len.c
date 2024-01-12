#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a doubly linked list.
 * @h: A pointer to the head of the doubly linked list.
 *
 * Description: Tranverse from head to tail of a doubly linked list.
 *
 * Return: The number of elements in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *element = h;
	size_t count = 0;

	while (element != NULL)
	{
		element = element->next;
		count++;
	}

	return (count);
}
