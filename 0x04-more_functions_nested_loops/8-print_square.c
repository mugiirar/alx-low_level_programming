#include "main.h"

/**
 * print_square - prints square made up of #
 * @size: input
 * Return: Success
 */

void print_square(int size)
{
	int n;
	int p;

	for (n = 0; n < size; n++)
	{
		for (p = 0; p < size; p++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
