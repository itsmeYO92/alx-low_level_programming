#include "lists.h"

/**
 * sum_listint - count asingle linked list
 * @head: pointer to the head of the single linked list
 * Return: sum of nodes
*/
int sum_listint(listint_t *head)
{
	listint_t *current_node = (listint_t *)head;
	int sum = 0;

	while (current_node)
	{
		sum += current_node->n;
		current_node = current_node->next;
	}
	return (sum);
}
