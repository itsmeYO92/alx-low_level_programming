#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: size of the hash table to be created
 * Return: adress to the new created hash table or NULL if FAILED
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_table = malloc(sizeof(hash_node_t *));
	unsigned long int i;

	if (!new_hash_table)
		return (NULL);
	new_hash_table->size = size;
	new_hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (!new_hash_table->array)
	{
		free(new_hash_table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		new_hash_table->array[i] = NULL;
	return (new_hash_table);
}
