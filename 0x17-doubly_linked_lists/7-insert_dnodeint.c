#include "lists.h"

/**
 * insert_dnodeint_at_index - Adds a new node  a doubly linked list.
 *
 * @h: A double pointer to the head of the doubly linked list.
 * @n: The value to be assigned to the new node.
 * @idx: index
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{

	dlistint_t *new = malloc(sizeof(dlistint_t *));
	dlistint_t *tmp;
	unsigned int i = 1;

	if (!new)
		return (NULL);

	new->n = n;
	if (idx == 0)
		return (add_dnodeint(h, n));
	tmp = *h;
	for (i = 1; i < idx; i++)
	{
		if (tmp->next)
			tmp = tmp->next;
		else
			return (NULL);
	}
	new->next = tmp->next;
	tmp->next = new;
	new->prev = tmp;
	return (new);
}
