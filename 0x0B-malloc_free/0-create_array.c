#include "main.h"
#include <stdlib.h>

/**
 * create_array - unction that creates an array of chars
 * @size: integer input
 * @c: character input
 * Return: Char
 */

char *create_array(unsigned int size, char c)
{
	char *k;

	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	k = (char *) malloc(sizeof(char) * size);

	if (k == NULL)
		return (0);
	for (i = 0; i < size; i++)
	{
		k[i] = c;
	}

	*(k + i) = '\0';

	return (k);
}
