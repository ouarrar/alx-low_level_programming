#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node to the end of a linked list.
 * @head: A pointer to a pointer to the head of the linked list.
 * @str: The string to be added to the new node.
 *
 * Return: A pointer to the newly created node, or NULL
 * if memory allocation fails.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;      /* Declare a pointer for the new node*/
	list_t *current = *head; /* Declare a pointer to traverse the list*/
	unsigned int length = 0; /*Initializ a variable to store the length of 'str'*/

	/* Calculate the length of the input string 'str'*/
	while (str[length])
		length++;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(list_t));
	if (!new_node) /*Check if memory allocation failed*/
		return (NULL);

	/* Allocate memory for the string in the new node and copy 'str' into it*/
	new_node->str = strdup(str);

	if (!new_node->str) /* Check if strdup failed*/
	{
		free(new_node); /* Free the memory allocated for the new node*/
		return (NULL);
	}

	new_node->len = length; /* Set the length of the string in the new node*/
	new_node->next = NULL;  /* Set the 'next' pointer of the new node to NULL*/

	if (*head == NULL)
	{
		*head = new_node; /* If the list is empty, make the new node the head*/
		return (new_node);
	}

	while (current->next)
		current = current->next;

	current->next = new_node; /* Add the new node to the end of the list*/

	return (new_node); /*Return a pointer to the newly created node*/
}
