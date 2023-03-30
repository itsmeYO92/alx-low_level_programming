#include "lists.h"

/**
 * add_node_end - add node to the end of the list
 * @head: pointer to the head of the single linked list
 * @str: pointer to string to add
 * Return: adress of new element
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (!new || !str)
	{
		free(new);
		return (NULL);
	}

	new->next = NULL;
	new->str = strdup(str);
	new->len = strlen(str);
	last = *head;
	if (!last)
		return (*head = new);
	while (!last->next)
		last = last->next;

	last->next = new;

	return (new);
}
