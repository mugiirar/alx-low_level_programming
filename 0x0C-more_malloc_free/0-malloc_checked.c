#include "main.h"

/**
 * *malloc_checked - returns pointer to the allocated memory
 * @b: integer input
 * Return: 0 (always)
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}

	return (p);
}
