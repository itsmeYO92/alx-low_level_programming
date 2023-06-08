#include "hash_tables.h"

/**
 * hash_table_get - get the value associated with a key
 * @ht: hashtable to search
 * @key: key
 * Return: the value of the key or nil if nothing is found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = key_index(ht, key)
	if (!ht)
		return (NULL);
	
