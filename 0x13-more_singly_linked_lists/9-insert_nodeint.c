#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node of node at index
 * @head: pointer to the head of the single linked list
 * @idx: index
 * @n: value of the new node
 * Return: node at index
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *new;
	unsigned int current_index = 0;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	current = *head;
	new->next = NULL;
	new->n = n;
	while (current_index < idx && current)
	{
		current = current->next;
		current_index++;
	}
	if (current_index == idx && current)
	{
		new->next = current->next;
		current->next = new;
		return (new);
	}
	free(new);
	return (NULL);
}

