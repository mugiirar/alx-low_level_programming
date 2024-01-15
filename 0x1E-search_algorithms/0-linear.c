#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "search_algos.h"

/**
 * linear_search - searches for a value in an
 * @array: array
 * @size: size of the array to search
 * @value: value to search
 *
 * Return: the index of the found value,
 * or -1 if not found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t count;

	if (size == 0 || !array)
	{
		return (-1);
	}
	count = 0;
	while (count < size)
	{
		printf("Value checked array[%lu] = [%d]\n", count, array[count]);
		if (array[count] == value)
			return (count);
		count++;
	}

	return (-1);
}

