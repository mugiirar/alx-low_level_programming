#include "main.h"

/**
 * print_line - prints a line(_)  on the screen according to the n value
 * @n: counts
 * Return: Nothing
 */

void print_line(int n)
{
	int m;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}	
	m = 0;
	while (m < n)
	{
		_putchar('_');
		m++;
	}

	_putchar('\n');
}
