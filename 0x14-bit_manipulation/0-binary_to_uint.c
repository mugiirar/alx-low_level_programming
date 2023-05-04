#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * binary_to_uint - function that vonverts a binary
 * number to an unsigned int
 * @b: pointer to string
 * Return: the converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int t;
	int n;
	unsigned int p;

	t = 0;
	p = 0;

	if (b == NULL)
		return (0);

	n = 0;

	while (b[n])
	{
		if (b[n] != '0' && b[n] != '1')
		{
			return (0);
		}
		n++;
	}

	for (p = 1, t = 0, n--; n >= 0; n--, p *= 2)
	{
		if (b[n] == '1')
		{
			t += p;
		}
	}

	return (t);
}
