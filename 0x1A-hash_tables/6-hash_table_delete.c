#include "hash_tables.h"

/**
 * hash_table_delete - delete the hash table;
 * @ht: pointer to table;
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node, *tmp_node;

	if (ht)
	{
		for (i = 0; i < ht->size; i++)
		{
			node = ht->array[i];
			while (node)
			{
				tmp_node = node;
				node = node->next;
				free(tmp_node->key);
				free(tmp_node->value);
				free(tmp_node);
			}
		}
		free(ht->array);
		free(ht);
	}
}
