#include "main.h"

/**
 * _puts_recursion - a function that prints a string, followed by
 *  a new line.
 *  @s: character input.
 *  Return: Always 0.
 */

void _puts_recursion(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
