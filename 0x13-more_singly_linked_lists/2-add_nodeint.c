#include "lists.h"

/**
 * add_nodeint - add node to the beggining of the list
 * @head: pointer to the head of the single linked list
 * @n: pointer to int to add
 * Return: adress of new element
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
