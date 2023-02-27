#include "main.h"

/**
 * print_array - prints n elements of an array of integers,
 * @a: array
 * @n: count
 * Return: Always 0.
 */

void print_array(int *a, int n)
{
	int k = 0;

	for (k = 0; k < n; k++)
	{
		if (k < n - 1)
		{
		printf("%d", a[k]);
		printf(",");
		printf(" ");
		}
		else if (k == n - 1)
		{
		printf("%d", a[k]);
		}
	}
	printf("\n");
}
