#include "main.h"
#include <stdlib.h>


/**
 * *_tozero - fills memory block
 * @s: pointer input
 * @a: character input
 * @zas: integer iput
 * Return: char
 */

char *_tozero(char *s, char a, unsigned int zas)
{
	unsigned int k = 0;

	while (k < zas)
	{
		s[k] = a;
		k++;
	}
	return (s);
}

/**
 * _calloc - function that allocates memory for an array
 * @nmemb: int input
 * @size: int input
 * Return: 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	p = malloc(nmemb * size);
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	if (p == NULL)
	{
		return (NULL);
	}

	_tozero(p, 0, nmemb * size);
	return (p);
}

