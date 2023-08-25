#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node to the beginning of a linked list.
 * @head: A pointer to a pointer to the head of the linked list.
 * @str: The string to be added to the new node.
 *
 * Return: A pointer to the newly created node.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n;
	unsigned int len = 0;

	while (str[len])
		len++;

	n = malloc(sizeof(list_t));
	if (!n)
		return (NULL);

	n->str = strdup(str);
	n->len = len;
	n->next = (*head);
	(*head) = n;

	return (*head);
}
