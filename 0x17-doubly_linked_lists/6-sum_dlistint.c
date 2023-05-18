#include "lists.h"

/**
 * sum_dlistint - counts the elements of a doubly linked list.
 *
 * @head: A pointer to the head of the doubly linked list.
 *
 * Return: The sum of elements in the list.
 */
int sum_dlistint(dlistint_t *head)
{
	int i = 0;
	const dlistint_t *current;

	if (!head)
		return (0);
	current = head;
	while (current)
	{
		i += current->n;
		current = current->next;
	}
	return (i);
}
