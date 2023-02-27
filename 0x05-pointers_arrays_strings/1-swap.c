#include "main.h"

/**
 * swap_int -  swaps the values of two integers.
 * @a: input
 * @b: input
 * Return: (success) 0
 */

void swap_int(int *a, int *b)
{
	int xp = *a;

	*a = *b;
	*b = xp;
}
