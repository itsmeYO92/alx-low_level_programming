#include "lists.h"

/**
 * free_list - count asingle linked list
 * @head: pointer to the head of the single linked list
 * Return: nothing
*/
void free_list(list_t *head)
{
	free(head->str);
	free(head->next);
	free(head);
}
