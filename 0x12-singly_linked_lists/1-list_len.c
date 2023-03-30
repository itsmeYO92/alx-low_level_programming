#include "lists.h"

/**
 * list_len - count asingle linked list
 * @h: pointer to the head of the single linked list
 * Return: number of nodes
*/
size_t list_len(const list_t *h)
{
	list_t *current_node = (list_t *)h;
	size_t count = 0;

	while (current_node)
	{
		current_node = current_node->next;
		count++;
	}
	return (count);
}
