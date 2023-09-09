#include "hash_tables.h"

/**
 * hash_table_get - retrieve key
 * @ht: pointer to table
 * @key: the key to value
 * Return: item
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int ind;
	hash_node_t *new;

	if (ht == NULL)
		return (NULL);

	if (key == NULL)
		return (NULL);

	if (*key == '\0')
		return (NULL);

	ind = key_index((const unsigned char *)key, ht->size);
	if (ind >= ht->size)
		return (NULL);

	new = ht->array[ind];

	if (new)
	{
		while (strcmp(new->key, key) != 0)
			new = new->next;
	}

	if (new == NULL)
	{
		return (NULL);
	}
	else
	{
		return (new->value);
	}
}
