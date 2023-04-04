#include "lists.h"

/**
 * print_listint - print asingle linked list
 * @h: pointer to the head of the single linked list
 * Return: number of nodes
*/

size_t print_listint(const listint_t *h)
{
	listint_t *current_node = (listint_t *)h;
	int count = 0;

	while (current_node)
	{
		printf("%d\n", current_node->n);
		current_node = current_node->next;
		count++;
	}
	return (count);
}
