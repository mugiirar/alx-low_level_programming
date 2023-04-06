#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to
 *  get from one number to another.
 *
 * @n: integer input
 *
 * @m: integer input
 *
 * Return: numer of bits needed
 *
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int p;
	int c;

	p = n ^ m;

	c = 0;

	while (p)
	{
		if (p & 1)
		{
			c++;
		}

		p = p >> 1;
	}

	return (c);
}
