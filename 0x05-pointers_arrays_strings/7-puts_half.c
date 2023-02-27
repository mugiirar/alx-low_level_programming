#include "main.h"

/**
 * puts_half - print the second half of the string
 * @str: char inputs
 */

void puts_half(char *str)
{
	int n;
	int len;

	len = strlen(str);
	n = len / 2;

	if (len % 2 != 0)
	{
		for (n = (len - 1) / 2; n < len; n++)
		{
			_putchar(str[n]);
		}
	}
	else
	{
		for (n = len / 2; n < len; n++)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
