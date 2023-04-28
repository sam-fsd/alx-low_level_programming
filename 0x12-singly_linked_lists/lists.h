#ifndef LISTS_H
#define LISTS_H

/**
 * struct list - a struct to rep. a node
 * @str: pointer to a string
 * @len: integer element
 * @next: pointer to a struct list
 *
 * Description: declares a new node in a linked list
 */
typedef struct list
{
	char *str;
	int len;
	struct list *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
#endif
