#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - counts the number of nodes in the list
 * @h: pointer to first node
 * Return: 0 if h is null else number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	if (h == NULL)
		return (0);

	for (i = 0; h != NULL; i++)
		h = h->next;

	return (i);
}
