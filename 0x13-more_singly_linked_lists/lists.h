#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - A structure representing a singly-linked list node.
 * @n: The integer value stored in the node.
 * @next: A pointer to the next node in the list.
 *
 * Description: This structure defines the individual nodes of a singly-linked
 *              list of integers. Each node contains an integer value (@n) and
 *              a pointer to the next node in the list (@next).
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);

#endif
