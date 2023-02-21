#include "main.h"

/**
 * print_alphabet_x10(void) - prints alphabets
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int n;
	char k;

	for (n = 0; n <= 9; n++)
	{
	for (k = 'a'; k <= 'z'; k++)
	{
	_putchar(k);
	}
	_putchar('\n');
	}
}
