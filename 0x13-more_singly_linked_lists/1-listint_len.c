#include "lists.h"

/**
 * listint_len - count asingle linked list
 * @h: pointer to the head of the single linked list
 * Return: number of nodes
*/
size_t listint_len(const listint_t *h)
{
	listint_t *current_node = (listint_t *)h;
	size_t count = 0;

	while (current_node)
	{
		current_node = current_node->next;
		count++;
	}
	return (count);
}
