#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocates a memory block
 * @ptr: pointer to the memory
 *
 * @old_size: size of the allocated memory
 *
 * @new_size: new size of the new memory
 *
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p1;
	char *r;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	p1 = malloc(new_size);
	if (!p1)
		return (NULL);

	r = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			p1[i] = r[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			p1[i] = r[i];
	}

	free(ptr);
	return (p1);
}
