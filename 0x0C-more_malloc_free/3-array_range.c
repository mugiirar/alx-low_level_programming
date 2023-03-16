#include "main.h"


/**
 * *array_range -  a function that creates an array of integers.
 * @min: int input
 * @max: int input
 * Return: integer
 */

int *array_range(int min, int max)
{
	int range;
	int *p;
	int k;

	if (min > max)
	{
		return (NULL);
	}
	range = max - min + 1;
	p = malloc(range * sizeof(int));

	if (p == NULL)
	{
		return (NULL);
	}
	k = 0;
	while (min <= max)
	{
		p[k] = min;
		min++;
		k++;
	}
	return (p);
}
