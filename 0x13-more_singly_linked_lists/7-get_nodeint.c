
#include "lists.h"

/**
 * get_nodeint_at_index - locates an element in the nth index in a linked
 * lisr listint_t
 * @index: index of the node
 * @head: pointer to the head of the list
 *
 * Return: nth element in the list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
