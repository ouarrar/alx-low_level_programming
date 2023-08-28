#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: A pointer to a pointer to the head of the list.
 * @n: The integer value to be stored in the new node.
 *
 * Description: This function creates a new node with the given integer value
 * (@n) and adds it to the beginning of the linked list pointed to by @head.
 *
 * Return: If the function succeeds, it returns a pointer to the newly created node.
 *         If memory allocation fails or if @head is NULL, it returns NULL.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
