#include "lists.h"

/**
 * pop_listint - Removes the head node of a list and returns its value.
 * @head: A pointer to a pointer to the head of the list.
 *
 * Description: This function removes the first node (head) from a listint_t
 * linked list and returns the integer value of the removed node.
 *
 * Return: If the list is empty or if @head is NULL, it returns 0.
 *         Otherwise, it returns the integer value of the removed node.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
