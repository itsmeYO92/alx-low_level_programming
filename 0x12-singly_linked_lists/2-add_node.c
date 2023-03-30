#include "lists.h"

/**
 * add_node - add node to the beggining of the list
 * @head: pointer to the head of the single linked list
 * @str: pointer to string to add
 * Return: adress of new element
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;

	return (*head);
}
