#include <stdlib.h>
#include "main.h"

/**
 * *_set - fills memory
 * @s: memory area to be filled
 * @b: char
 * @n: times to copy b
 *
 * Return: pointer to the memory area s
 */
char *_set(char *y, char k, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		y[i] = k;
	}

	return (y);
}

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(size * nmemb);

	if (p == NULL)
		return (NULL);

	_set(p, 0, nmemb * size);

	return (p);
}
