#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a linked list list_h
 * @head: pointer to start of the list
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (h)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
