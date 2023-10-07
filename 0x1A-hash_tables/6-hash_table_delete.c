#include "hash_tables.h"

/**
 * hash_table_delete - A function that Deletes a hash table
 * @ht: hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node, *next_node;

	if (ht == NULL)
		return;

	i = 0;
	while (index < ht->size)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			next_node = node->next;
			free(node->key);
			free(node->value);
			free(node);
			if (next_node != NULL)
				node = next_node;
			else
				break;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
