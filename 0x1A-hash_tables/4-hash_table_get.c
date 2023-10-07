#include "hash_tables.h"

/**
 * hash_table_get - A function that gets the value associated with a key
 * @ht: The hash table to find the key in.
 * @key: The key to be found on the hash table.
 *
 * Return: The value associated with the key, or NULL if key was not found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *ht_bucket;
	unsigned long int index;

	if (!ht || !key || !(*key))
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	ht_bucket = ht->array[index];

	while (ht_bucket)
	{
		if (strcmp(ht_bucket->key, key) == 0)
			return (ht_bucket->value);
		ht_bucket = ht_bucket->next;
	}
	return (NULL);
}
