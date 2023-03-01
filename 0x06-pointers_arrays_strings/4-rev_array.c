#include "main.h"

/**
 * reverse_array - reverses order of integers
 * @a: int arrar
 * @n: int input
 * Return: 0 always
 */

void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		int tmp = a[i];

		a[i] = a[j];
		a[j] = tmp;
	}
}

