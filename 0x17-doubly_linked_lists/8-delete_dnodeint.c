#include "lists.h"

/**
 * free_dlistint - free a doubly linked list.
 *
 * @head: A double pointer to the head of the doubly linked list.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	if (!head || !(*head))
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		return (1);
	}

	current = *head;
	for (i = 0; i < index; i++)
	{
		if (current->next)
			current = current->next;
		else
			return (-1);
	}
	current->prev->next = current->next;
	if (current->next)
		current->next->prev = current->prev;
	return (1);
}
