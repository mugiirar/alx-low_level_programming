#include "main.h"

/**
 * print_most_numbers - printing the numbers between 0 to 9
 * Return: Value
 */

void print_most_numbers(void)
{
	int p;

	p = 0;
	while (p <= 9)
	{
	if (p != 2 && p != 4)
	{
	_putchar(p + '0');
	}
	p++;
	}
	_putchar('\n');
}
