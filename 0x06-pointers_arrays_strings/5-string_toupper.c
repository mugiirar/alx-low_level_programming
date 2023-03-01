#include "main.h"

/**
 * string_toupper - a function that changes all
 * lowercase letters of a string to uppercase
 * @str: char input
 * Return: char
 */

char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (islower(*ptr))
		{
			*ptr = toupper(*ptr);
		}
		ptr++;
	}
	return (str);
}
