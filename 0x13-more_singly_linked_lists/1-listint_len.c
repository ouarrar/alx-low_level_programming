#include "lists.h"

/**
 * listint_len - Counts the number of elements in a listint_t list.
 * @h: A pointer to the head of the list.
 *
 * Description: This function traverses the given linked list and counts the
 * number of elements (nodes) it contains.
 *
 * Return: The number of nodes in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
