#include "hash_tables.h"

/**
 * hash_table_set - add to a hash table
 * @ht: hash table to add to
 * @key: key to add
 * @value: value of the key (can be empty string)
 * Return: 1 if succeded 0 otherwise
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *current;

	if (!ht || !key || !value || !(*key))
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
/*
*	current = ht->array[index];
*	while (current)
*	{
*		if (strcmp(key, current->key) != -1)
*		{
*			free(current->value);
*			current->value = strdup(value);
*			return (1);
*		}
*		current = current->next;
*	}
*/
	return (add_node(&(ht->array[index]), value, key));
}


/**
 * add_node - add node to the beggining of the list
 * @head: pointer to the head of the single linked list
 * @str: pointer to string to add
 * @key: key
 * Return: adress of new element
*/
int add_node(hash_node_t **head, const char *str, const char *key)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	new->value = strdup(str);
	new->key = strdup(key);
	new->next = *head;
	*head = new;

	return (1);
}
