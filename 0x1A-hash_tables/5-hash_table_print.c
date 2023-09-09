#include "hash_tables.h"

/**
 * hash_table_print - print table
 * @ht: pointer to a table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned char comma_needed;
	unsigned long int i;
	hash_node_t *current_node;

	if (ht == NULL)
	{
		return;
	}

	printf("{");
	comma_needed = 0;

	i = 0;
	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			if (comma_needed == 1)
			{
				printf(", ");
			}
			current_node = ht->array[i];
			while (current_node != NULL)
			{
				printf("'%s': '%s'", current_node->key, current_node->value);
				current_node = current_node->next;
				if (current_node != NULL)
				{
					printf(", ");
				}
			}
			comma_needed = 1;
		}
		i = i + 1;
	}
	printf("}\n");
}
