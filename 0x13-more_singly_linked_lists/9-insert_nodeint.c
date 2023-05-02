#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a node at a given index
 * @head: pointer to start of the list
 * @idx: position to insert our element in the list
 * @n: integer
 *
 * Return: NULL if new node failed
 * NULL if we reach the end of list or index of out of bounds
 * else return address of the new element
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new, *current, *prev;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	current = *head;
	prev = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;

		return (new);
	}

	for (i = 0; i < idx; i++)
	{
		if (current->next == NULL)
			return (NULL);

		prev = current;
		current = current->next;
	}
	new->next = current;
	prev->next = new;

	return (new);
}
