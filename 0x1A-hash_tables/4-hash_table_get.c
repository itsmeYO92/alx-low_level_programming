#include "hash_tables.h"

/**
 * hash_table_get - get the value associated with a key
 * @ht: hashtable to search
 * @key: key
 * Return: the value of the key or nil if nothing is found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current;

	if (!ht)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current)
	{
		if (strcmp(key, current->key) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL);
}
