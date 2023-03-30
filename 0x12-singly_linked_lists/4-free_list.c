#include "lists.h"

/**
 * free_list - count asingle linked list
 * @head: pointer to the head of the single linked list
 * Return: nothing
*/
void free_list(list_t *head)
{
	list_t *current;

	while (head)
	{
		current = head->next
		free(head->str);
		free(head->next);
		free(head);
		head = current;
	}
	free(current);
}
