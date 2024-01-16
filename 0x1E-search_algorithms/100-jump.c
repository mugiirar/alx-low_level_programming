#include "search_algos.h"

/**
  * jump_search - Searches for a value in a sorted array
  * @array: A pointer to the first element of the arra
  * @size: The number of elements
  * @value: The value
  * Return: If the value is not present or the array is NULL
  * Description: Prints a value every time it is compared in the array.
  */

int jump_search(int *array, size_t size, int value)
{
	size_t i, track, step;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	for (i = track = 0; track < size && array[track] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", track, array[track]);
		i = track;
		track += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, track);

	if (track < size - 1)
	{
		track = track;
	}
	else
	{
		track = size - 1;
	}
	for (; i < track && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	if (array[i] == value)
	{
		return ((int)i);
	}
	else
	{
		return (-1);
	}
}
