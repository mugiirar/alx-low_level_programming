#include "main.h"

/**
 * _isalpha - Cheking for alphabetic characters
 * @c: The character to be investigated
 * Return: 1 for alphabetic character or 0 for others
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
