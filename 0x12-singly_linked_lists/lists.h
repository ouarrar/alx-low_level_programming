#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_s - A structure representing a node in a linked list.
 * @str: A pointer to a string.
 * @len: The length of the string.
 * @next: A pointer to the next node in the linked list.
 *
 * Description: This structure is used to create a linked list where each node
 * contains a string, its length, and a pointer to the next node in the list.
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);

#endif
