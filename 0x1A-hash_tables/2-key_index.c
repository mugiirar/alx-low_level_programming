#include "hash_tables.h"

/**
 * key_index - index of key/value
 * @key: charscter input
 * @size: integer
 * Return: index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int p, new;

	p = hash_djb2(key);

	new = p % size;

	return (new);
}
