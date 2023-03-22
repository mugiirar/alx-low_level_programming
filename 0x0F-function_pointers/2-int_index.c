#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - a function that searches for an integer.
 * @array: integer array
 * @size: array size
 * @cmp: pointer to function
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int p;

	if (size <= 0)
	{
		return (-1);
	}
	
	for (p = 0; p <= size; p++)
	{
		int k;
		k = cmp(array[p]);
	
		if (k != 0)
		{
			return (p);
		}
	}
	return (0);
}
