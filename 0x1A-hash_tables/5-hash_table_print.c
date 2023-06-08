#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;
	int start = 1;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current)
		{
			if (start != 1)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			current = current->next;
			start = 0;
		}
	}
	printf("}\n");
}
