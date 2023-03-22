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
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);
				i++;
			}
		}
	}
	return (-1);
}
