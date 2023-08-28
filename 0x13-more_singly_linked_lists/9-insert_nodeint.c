#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a specific index.
 * @head: A pointer to a pointer to the head of the list.
 * @idx: The index at which the new node should be inserted (0-based).
 * @n: The integer value to be stored in the new node.
 *
 * Description: This function inserts a new node with the specified
 * integer value (@n) at the given index (@idx) in the listint_t linked
 * list. The index is 0-based,
 * meaning the first node is at index 0, the second at index 1, and so on.
 *
 * Return: If memory allocation fails or if the index is out of range,
 * it returns NULL. Otherwise, it returns a pointer to the newly inserted node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
