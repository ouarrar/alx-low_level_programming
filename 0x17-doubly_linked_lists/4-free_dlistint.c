#include "lists.h"

/**
 * free_dlistint - Frees a doubly linked list.
 * @head: A pointer to the head of the doubly linked list.
 *
 * This function frees the memory allocated for all nodes in the list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp);
	}
}
