#include "lists.h"

/**
 * get_nodeint_at_index - Returns the node at a given index in a listint_t list
 * @head: A pointer to the head of the list.
 * @index: The index of the node to retrieve (0-based).
 *
 * Description: This function returns a pointer to the node at the specified
 * index in the listint_t linked list. The index is 0-based, meaning the
 * first node is at index 0, the second at index 1, and so on.
 *
 * Return: If the index is out of range or if the list is empty,
 * it returns NULL. Otherwise, it returns a pointer to the node 
 * at the specified index.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
