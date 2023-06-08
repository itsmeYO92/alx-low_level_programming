#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to delete
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		free_list(ht->array[i]);
	}
	free(ht->array);
	free(ht);
}

/**
 * free_list - count asingle linked list
 * @head: pointer to the head of the single linked list
 * Return: nothing
*/
void free_list(hash_node_t *head)
{
	hash_node_t *current;

	while (head)
	{
		current = head->next;
		free(head->value);
		free(head->key);
		free(head);
		head = current;
	}
}

