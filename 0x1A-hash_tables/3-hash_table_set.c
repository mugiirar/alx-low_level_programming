#include "hash_tables.h"

/**
 * hash_table_set - Add an item to Hash.
 * @ht: A pointer.
 * @key: The key of the added.
 * @value: value of the key.
 *
 * Return: 0.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *pvp;
	char *v_copy;
	unsigned long int n_key, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	v_copy = strdup(value);
	if (v_copy == NULL)
		return (0);

	n_key = key_index((const unsigned char *)key, ht->size);
	for (i = n_key; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = v_copy;
			return (1);
		}
	}

	pvp = malloc(sizeof(hash_node_t));
	if (pvp == NULL)
	{
		free(v_copy);
		return (0);
	}
	pvp->key = strdup(key);
	if (pvp->key == NULL)
	{
		free(pvp);
		return (0);
	}
	pvp->value = v_copy;
	pvp->next = ht->array[n_key];
	ht->array[n_key] = pvp;

	return (1);
}
