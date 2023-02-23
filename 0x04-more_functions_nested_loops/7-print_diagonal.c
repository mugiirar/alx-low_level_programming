#include "main.h"

/**
 * print_diagonal - prints the character \ as many times as specified
 * @n: number input.
 * Return: Seccess.
 */

void print_diagonal(int n)
{
	int k, p;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	p = 0;
	while (p < n)
	{
		for (k = 0; k < p; k++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
		p++;
	}
}
