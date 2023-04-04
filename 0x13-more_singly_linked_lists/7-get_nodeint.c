#include "lists.h"

/**
 * get_nodeint_at_index - get value of node at index
 * @head: pointer to the head of the single linked list
 * @index: index
 * Return: node at index
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int current_index = 0;

	current = head;
	while (current_index < index && current)
	{
		current = current->next;
		current_index++;
	}
	if (current_index == index)
		return (current);
	return (NULL);
}

