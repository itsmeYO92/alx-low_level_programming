#include "lists.h"

/**
 * dlistint_len - counts the elements of a doubly linked list.
 *
 * @h: A pointer to the head of the doubly linked list.
 *
 * Return: The number of elements in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;
	const dlistint_t *current;

	if (!h)
		return (0);
	current = h;
	while (current)
	{
		i++;
		current = current->next;
	}
	return (i);
}
