#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds a node at the start of the list
 * @head: double pointer
 * @str: string to be duplicated
 *
 * Return: NULL if new node is NULL
 * Pointer to the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *dup_str;
	int len = 0;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	dup_str = strdup(str);

	if (dup_str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (str[len])
		len++;

	new_node->str = dup_str;
	new_node->len = len;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
