#include "lists.h"

/**
 * sum_dlistint - Calculates the sum of all integers in a doubly linked list.
 * @head: A pointer to the head of the doubly linked list.
 *
 * Return: The sum of all integers in the list.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}
