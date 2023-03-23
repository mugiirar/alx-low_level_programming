#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - a function that prints numbers, followed by
 * a new line.
 * @separator: char input
 * @n: integer input
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int k;
	va_list args;
	va_start(args, n);

	for (k = 0; k < n; k++)
	{
		if (separator == NULL)
		{
			printf("%d", va_arg(args, int));
		}
		else if (separator && k == 0)
		{
			printf("%d", va_arg(args, int));
		}
		else
		{
			printf("%s%d", separator, va_arg(args, int));
		}
	}
	va_end(args);
	printf("\n");
}
