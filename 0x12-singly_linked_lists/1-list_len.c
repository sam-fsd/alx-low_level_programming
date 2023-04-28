#include "lists.h"
/**
 * list_len - prints number of elements in a list
 * @h: pointer to a node
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}
