#include "main.h"

/**
 * *_num - write nums
 * @n: int input
 * @m: int input
 * @s: integer input
 * Return: int
 */

int *_num(int *s, int n, int m)
{
	int k;

	k = 0;
	while (n <= m)
	{
		s[k] = n;
		n++;
		k++;
	}
	return (s);
}

/**
 * *array_range -  a function that creates an array of integers.
 * @min: int input
 * @max: int input
 * Return: integer
 */

int *array_range(int min, int max)
{
	int *p;

	if (min > max)
	{
		return (NULL);
	}

	max = max + 1;
	p = malloc((max - min) * sizeof(int));

	if (p == NULL)
	{
		return (NULL);
	}
	_num(p, min, max);

	return (p);
}
