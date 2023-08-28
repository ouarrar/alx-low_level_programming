#include "lists.h"

/**
 * sum_listint - Calculates the sum of all integer values in a listint_t list.
 * @head: A pointer to the head of the list.
 *
 * Description: This function traverses the listint_t linked list and calculate
 * the sum of all the integer values contained in the nodes.
 *
 * Return: The sum of all integer values in the list.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
