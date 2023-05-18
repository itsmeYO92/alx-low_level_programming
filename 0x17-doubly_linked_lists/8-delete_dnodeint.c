#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at a given index in a doubly linked list.
 *
 * @head: A double pointer to the head of the doubly linked list.
 * @index: The index of the node to be deleted.
 *
 * Return: 1 if the deletion is successful, -1 if it fails.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	if (!head || !(*head))
		return (-1);
	if (index == 0)
	{
		current = (*head)->next;
		free(*head);
		if (current)
			current->prev = NULL;
		*head = current;
		return (1);
	}

	current = *head;
	for (i = 0; i < index; i++)
	{
		if (current->next)
			current = current->next;
		else
		{
			free(current);
			return (-1);
		}
	}
	current->prev->next = current->next;
	if (current->next)
		current->next->prev = current->prev;
	free(current);
	return (1);
}
