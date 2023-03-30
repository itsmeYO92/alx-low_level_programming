#include "lists.h"

/**
 * print_list - print asingle linked list
 * @h: pointer to the head of the single linked list
 * Return: number of nodes
*/

size_t print_list(const list_t *h)
{
	list_t *current_node = (list_t *)h;
	int count = 0;

	while (current_node)
	{
		if (!current_node->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", current_node->len, current_node->str);
		current_node = current_node->next;
		count++;
	}
	return (count);
}
