#include "main.h"

/**
 * print_number - a function that prints an integer.
 * @n: number to be printed
 * Return: Always 0.
 */

void print_number(int n)
{
	unsigned int x;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	x = n;

	if (x / 10)
		print_number(x / 10);

	_putchar(x % 10 + '0');
}
