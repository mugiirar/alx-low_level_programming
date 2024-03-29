#include "main.h"

/**
 * set_bit - a function that sets the value of a bit to 1 at a given
 * index
 *
 * @n: integer input
 *
 * @index: the index position to access
 *
 * Return: 1 if it worked, -1 if an error occured
 *
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n = *n | (1 << index);

	return (1);
}
