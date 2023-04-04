#include "lists.h"

/**
 * delete_nodeint_at_index - insert a node of node at index
 * @head: pointer to the head of the single linked list
 * @index: index
 * Return: node at index
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *new;
	unsigned int i = 0;

	current = *head;
	if (index != 0)
	{
		for (i = 0; i < index - 1 && current; i++)
			current = current->next;
	}

	if (current && (current->next || index == 0))
	{
		new = current->next;
		if (index == 0)
			*head = new;
		else
			current->next = new->next;
		index == 0 ? free(current) : free(new);
		return (1);
	}
	return (-1);
}

