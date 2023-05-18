#include "lists.h"

/**
 * free_dlistint - free a doubly linked list.
 *
 * @head: A double pointer to the head of the doubly linked list.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	if (!head)
		return (-1);
	if (index == 0)
	{
		head = head->next;
		return (1);
	}

	current = head->next;
	for (i = 1; i < index; i++)
	{
		current = current->next;
		if (!current)
			return (-1);
	}
	current->prev->next = current->next;
	current->next->prev = current->prev;
}
