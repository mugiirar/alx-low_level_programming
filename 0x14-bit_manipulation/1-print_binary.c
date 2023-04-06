#include "main.h"

/**
 * print_binary - a function that prints the binary representation of
 * a number
 *
 * @n: integer from user
 *
 */
void print_binary(unsigned long int n)
{
	int p;
	int t = 0;
	unsigned long int c;

	p = 63;

	while (p >= 0)
	{
		c = n >> p;

		if (c & 1)
		{
			_putchar('1');
			t++;
		}
		else if (t)
			_putchar('0');
		p--;
	}
	if (!t)
	{
		_putchar('0');
	}
}
