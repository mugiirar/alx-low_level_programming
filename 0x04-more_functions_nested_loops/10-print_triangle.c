#include "main.h"

/**
 * print_triangle - draws a triangle on the terminal
 * @size: inpu value
 * Return: 0 (Success).
 */

void print_triangle(int size)
{
	int x;
	int y;
	int z;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (x = 0; x < size; x++)
	{
	for (y = size - x; y > 1; y--)
	{
	_putchar('#');
	}
	for (z = 0; z <= x; z++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
	}
}

