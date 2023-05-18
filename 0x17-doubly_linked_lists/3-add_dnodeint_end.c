#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a doubly linked list.
 *
 * @head: A double pointer to the head of the doubly linked list.
 * @n: The value to be assigned to the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

	dlistint_t *new = malloc(sizeof(dlistint_t *));
	dlistint_t *tmp;

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (!head || !(*head))
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	tmp = *head;
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = new;
	new->prev = tmp;
	return (new);
}
