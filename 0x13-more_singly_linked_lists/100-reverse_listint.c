#include "lists.h"

/**
 * reverse_listint - insert a node of node at index
 * @head: pointer to the head of the single linked list
 * Return: reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *i = NULL, *j = NULL;

	while (*head != NULL)
	{
		i = (*head)->next;
		(*head)->next = j;
		j = *head;
		*head = i;
	}
	*head = j;
	return (*head);
}
