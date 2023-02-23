#include "main.h"

/**
 * more_numbers - prints 14 numbers 10 times
 * Return: Success
 */

void more_numbers(void)
{
	int count;
	int p;

	count = 0;

	while (count <= 10)
	{
	for (p = 0; p <= 14; p++)
	{
	_putchar(p + '0');
	}
	_putchar('\n');
	count++;
	}
	_putchar('\n');
}
