#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: character input
 * Return: Always 0.
 */

void _puts(char *str)
{
int index = 0;
while (str[index])
{
	_putchar(str[index]);
	index++;
}
_putchar('\n');
}
