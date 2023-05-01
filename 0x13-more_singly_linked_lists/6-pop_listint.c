#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint -  deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: pointer to start of the list
 *
 * Return: n member of the deleted node
 */
int pop_listint(listint_t **head)
{
	listint_t *start;
	int data;

	if (*head == NULL)
		return (0);

	start = *head;
	data = (*head)->n;
	*head = (*head)->next;

	free(start);
	return (data);
}
