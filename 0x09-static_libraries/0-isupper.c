#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _isupper - determines if the character is uppercase.
 * @c: input value
 * Return: 1 for uppercase or 0 for lowercase
 */

int _isupper(int c)
{

	if (isupper(c))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
