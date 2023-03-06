#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: memory to be filled
 * @b: char to copy
 * @n: times to copy b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int p;

	for (p = 0; p < n; p++)
	{
		s[p] = b;
	}

	return (s);
}
