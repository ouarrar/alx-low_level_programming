#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 * @head: A pointer to the head of the list.
 *
 * Description: This function frees all the nodes in a listint_t linked list,
 *              starting from the head node.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
