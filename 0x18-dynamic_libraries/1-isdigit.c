#include "main.h"

/**
 * _isdigit - determines if a character is a digit
 *@c: the input to be checked.
 * Return:1 for a digit and 0 for otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
