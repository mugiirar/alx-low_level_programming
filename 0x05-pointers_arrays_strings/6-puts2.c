#include "main.h"

/**
 * puts2 -  prints every other character of a string
 * @str: array of characters
 * Return: Always 0.
 */

void puts2(char *str)
{
	int p;
	int l;

	p = strlen(str);
	l = 0;
	while (l < p)
	{
		if (l % 2 == 0)
		{
			_putchar(str[l]);
		}
		l++;
	}
	_putchar('\n');
}
