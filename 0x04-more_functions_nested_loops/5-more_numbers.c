#include "main.h"

/**
 * more_numbers - prints 14 numbers 10 times
 * Return: Success
 */

void more_numbers(void)
{
	int count;
	int p;

	for (count = 0; count <= 10; count++)
	{
	for (p = 0; p <= 14; p++)
	{
	putchar(p + '0');
	}
	putchar('\n');
	}
	putchar('\n');
}
