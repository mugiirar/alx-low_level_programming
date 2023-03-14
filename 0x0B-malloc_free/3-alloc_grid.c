#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - creates a two dimensional array of ints
 *
 * @width: width
 *
 * @height: height
 *
 * Return: pointer to the created matrix (Success)
 * NULL (Error)
 */
int **alloc_grid(int width, int height)
{

	int **a;
	int i, k;

	if (height <= 0 || width <= 0)
		return (NULL);

	a = (int **) malloc(sizeof(int *) * height);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		a[i] = (int *) malloc(sizeof(int) * width);
		if (a[i] == NULL)
		{
			free(a);
			for (k = 0; k <= i; k++)
				free(a[k]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (k = 0; k < width; k++)
		{
			a[i][k] = 0;
		}
	}
	return (a);
}
