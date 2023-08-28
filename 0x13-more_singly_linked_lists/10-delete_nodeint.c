#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node at a specific index.
 * @head: A pointer to a pointer to the head of the list.
 * @index: The index of the node to delete (0-based).
 *
 * Description: This function deletes the node at the specified index in the
 * listint_t linked list. The index is 0-based, meaning the first node is at
 * index 0, the second at index 1, and so on.
 *
 * Return: If the function succeeds, it returns 1. If the index is out of range
 * or if @head is NULL, it returns -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node = *head;
	listint_t *previous_node = NULL;
	unsigned int current_index = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(current_node);
		return (1);
	}

	while (current_index < index)
	{
		if (!current_node || !(current_node->next))
			return (-1);
		previous_node = current_node;
		current_node = current_node->next;
		current_index++;
	}

	previous_node->next = current_node->next;
	free(current_node);

	return (1);
}
