#include "hash_tables"

/**
 * hash_table_delete - delete given hash table
 * @ht: hash table given
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temporal, *next;
	unsigned long int index;

	if (!ht)
		return;
	for (index = 0; index < ht->size; index++)
		for (temporal = ht->array[index]; temporal; temporal = next)
		{
			next = temporal->next;
			free(temporal->key);
			free(temporal->value);
			free(temporal);
		}
	free(ht->array);
	free(ht);
}
