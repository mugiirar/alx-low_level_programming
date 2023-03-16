#include "main.h"

/**
 * *_calloc - a function that allocates memory for an array, using
 * malloc
 * @nmemb: integer input
 * @size: integer input
 * return: nothing
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	p = malloc(nmemb * size);
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	if (p ==NULL)
	{
		return (NULL);
	}
	return (p);
}

