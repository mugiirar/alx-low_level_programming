#include "main.h"

/**
 * print_last_digit - Printing the last digit of a number
 * @n: The number to be processed
 * Return: Value of the last digit of number
 */

int print_last_digit(int n)
{
	int ggg;

	ggg = n % 10;
	if (ggg < 0)
	{
	ggg = ggg * -1;
	}
	_putchar(ggg + '0');
	return (ggg);
}
