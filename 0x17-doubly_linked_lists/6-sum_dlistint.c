#include <stddef.h>
#include "lists.h"

/**
 * sum_dlistint - Sums all the data of a dlistint_t linked list.
 * @head: The head of the dlistint_t list.
 *
 * Return: The sum of all the data.
 *         Otherwise 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}

	return (sum);
}
