#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - finds sum of all parameters
 * @n: integer input
 * Return: THe sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int s = 0;
	va_list args;
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);


	for (i = 0; i < n; i++)
	{
		unsigned int x = va_arg(args, int);

		s += x;
	}
	va_end(args);
	return (s);
}
