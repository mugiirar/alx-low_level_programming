#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given in
 * ex.
 *
 * @n: integer input
 *
 * @index: integer input
 *
 * Return: the value of the bit at index index or -1 if an error
 * occured
 *
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int t;

	t = (n >> index);

	if (index > 32)
	{
		return (-1);
	}

	return (t & 1);
}

