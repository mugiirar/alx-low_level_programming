#include "main.h"
#include <stdlib.h>

/**
 * leet - a function that encodes a string into 1337
 *
 * @s: string input
 *
 * Return: @s
*/

char *leet(char *s)
{
	int i, j;
	char *result = (char *) malloc(strlen(s) + 1);

	for (i = 0, j = 0; s[i] != '\0'; i++, j++)
	{
		if (s[i] == 'a' || s[i] == 'A')
		{
			result[j] = '4';
		}
		else if (s[i] == 'e' || s[i] == 'E')
		{
			result[j] = '3';
		}
		else if (s[i] == 'o' || s[i] == 'O')
		{
			result[j] = '0';
		}
		else if (s[i] == 't' || s[i] == 'T')
		{
			result[j] = '7';
		}
		else if (s[i] == 'l' || s[i] == 'L')
		{
			result[j] = '1';
		}
		else
		{
			result[j] = s[i];
		}
	}
	result[j] = '\0';
	return (result);
}
