#include "main.h"

/**
 * _abs - Gives the absolute value of an integer.
 * @c: The number to be computed.
 * Return: Absolute value of s number or zero
 */

int _abs(int c)
{
	if (c < 0)
	{
	int ab;

	ab = c * -1;
	return (ab);
	}
	return (c);
}
