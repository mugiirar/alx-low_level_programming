#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings, followed by a
 * new line
 * @separator: character input
 * @n: int inpuT
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int k;
	char *s;

	va_list words;

	va_start(words, n);
	for (k = 0; k < n; k++)
	{
		s = va_arg(words, char *);
		if (separator == NULL)
		{
			printf("%s", s);
		}
		if (s == NULL)
		{
			s = "(nil)";
		}
		if (separator && k == 0)
		{
			printf("%s", s);
		}
		if (separator && k > 0)
		{
			printf("%s%s", separator, s);
		}
	}
	va_end(words);
	printf("\n");
}
