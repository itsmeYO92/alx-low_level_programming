#include "lists.h"

/**
 * free_listint - count a single linked list
 * @head: pointer to the head of the single linked list
 * Return: nothing
*/
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head)
	{
		current = head->next;
		free(head);
		head = current;
	}
}
