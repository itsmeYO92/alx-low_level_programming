#include "lists.h"

/**
 * free_dlistint - free a doubly linked list.
 *
 * @head: A double pointer to the head of the doubly linked list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	if (!head)
		return;

	current = head->next;
	while (head)
	{
		free(head);
		head = current;
		if (current)
			current = current->next;
	}

}
