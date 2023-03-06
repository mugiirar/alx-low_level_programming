#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diaginal of a square
 * matrix of integers
 *
 * @a: pointer to matrix of integers
 * @size: size of matrix
 *
 */


void print_diagsums(int *a, int size)
{
	int p;

	unsigned int sum, sum1;

	sum = 0;
	sum1 = 0;

	for (p = 0; p < size; p++)
	{
		sum += a[(size * p) + p];
		sum1 += a[(size * (p + 1)) - (p + 1)];
	}

	printf("%d, %d\n", sum, sum1);
}
