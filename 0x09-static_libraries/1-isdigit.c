#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _isdigit - determines if a character is a digit
 *@c: the input to be checked.
 * Return:1 for a digit and 0 for otherwise
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
