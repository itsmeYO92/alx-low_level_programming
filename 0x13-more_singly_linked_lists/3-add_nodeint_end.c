#include "lists.h"

/**
 * add_nodeint_end - add node to the end of the list
 * @head: pointer to the head of the single linked list
 * @n: pointer to integer to add
 * Return: adress of new element
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->next = NULL;
	new->n = n;
	last = *head;
	if (!last)
		return (*head = new);
	while (last->next)
		last = last->next;
	last->next = new;

	return (new);
}
