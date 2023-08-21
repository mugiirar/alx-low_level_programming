#include "main.h"

/**
 * _memset - fill memory with constant values given
 *
 * @s: pointer to char parameters
 *
 * @b: constant byte given
 *
 * @n: byte of memory area
 *
 * Return: *s
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
