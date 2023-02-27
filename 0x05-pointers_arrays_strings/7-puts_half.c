#include "main.h"

/**
 * puts_half - print the second half of the string
 * @str: char inputs
 */

void puts_half(char *str)
{
	int len = strlen(str);
	int count = len / 2;
	int i;

	if (len % 2 == 1)
	{
		count = (len - 1) / 2;
	}

	for (i = count; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
