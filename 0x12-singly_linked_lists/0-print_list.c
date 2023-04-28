#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements in a node
 * @h: pointer to a struct list
 *
 * Return: number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		nodes++;
		h = h->next;
	}

	return (nodes);
}
