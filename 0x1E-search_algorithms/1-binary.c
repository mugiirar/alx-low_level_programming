#include "search_algos.h"

/**
  * binary_search - Searches for a value in a sorted array
  *                 of integers using binary search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the index where the value is located.
  *
  * Description: Prints the [sub]array being searched after each change.
  */
int binary_search(int *array, size_t size, int value)
{
	size_t count, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		count = left;
		while (count < right)
		{
			printf("%d, ", array[count]);
			count++;
		}
		printf("%d\n", array[count]);

		count = left + (right - left) / 2;
		if (array[count] == value)
			return (count);
		if (array[count] > value)
			right = count - 1;
		else
			left = count + 1;
	}

	return (-1);
}
