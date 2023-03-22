#include <stdio.h>

/**
 * print_name -  a function that prints a name.
 * @name: character input
 * @f: pointer to the function
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
	{
		return;
	}

	(*f)(name);
}
