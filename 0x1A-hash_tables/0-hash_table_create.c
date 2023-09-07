#include "hash_tables.h"

/**
 * hash_table_t_create - make a hash table
 * @size: length of table
 * Return: NULL if error occurs else a pointer to a new table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *scope;
	unsigned long int p;

	scope = malloc(sizeof(hash_table_t));

	if (scope == NULL)
		return (NULL);

	scope->size = size;

	scope->array = malloc(sizeof(hash_node_t *) * size);

	if (scope->array == NULL)
		return (NULL);

	p = 0;
	while (p < size)
	{
		scope->array[p] = NULL;
		p = p + 1;
	}

	return (scope);
}
