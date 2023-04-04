#include "lists.h"

/**
 * pop_listint - delete head and return its value
 * @head: pointer to the head of the single linked list
 * Return: value of head
*/
int pop_listint(listint_t **head)
{
	int value;
	listint_t *tofree;

	if (!(*head))
		return (0);
	value = (*head)->n;
	tofree = *head;
	*head = (*head)->next;
	free(tofree);
	return (value);
}

