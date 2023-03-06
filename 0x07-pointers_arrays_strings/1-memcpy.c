#include "main.h"

/**
 * *_memcpy - copies memory
 * @dest: destination memory
 * @src: memory to copy from
 * @n: bytes to copy
 *
 * Return: pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int p;

	for (p = 0; p < n; p++)
	{
		dest[p] = src[p];
	}

	return (dest);
}
