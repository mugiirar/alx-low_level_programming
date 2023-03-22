#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function given as
 * as a parameter on each element of an array
 * @array: array to iterate
 * @size: size
 * @action: pointer to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int p;

	if (array != NULL && action != NULL && size > 0)
	{
		for (p = 0; p < size; p++)
		{
			action(array[p]);
		}
	}
	
}
