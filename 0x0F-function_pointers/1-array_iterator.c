#include <stdio.h>
#include <stdlib.h>

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
	{
		return;
	}

	unsigned int p;

	for(p = 0; p <= size; p++)
	{
		action(array[p]);
	}
}
