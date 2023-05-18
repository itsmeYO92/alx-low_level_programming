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

	if (!new)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	if (!(*head))
	{
		new->next = NULL;
		*head = new;
		return (*head);
	}
	new->prev = *head;	
	new->next = (*head)->next;
	while(new->next)
	{
		new->next = new->next->next;
		new->prev = new->next->prev;
	}
	new->prev = new->next ? new->next : *head;
	new->next = NULL;
	return (new);
}
