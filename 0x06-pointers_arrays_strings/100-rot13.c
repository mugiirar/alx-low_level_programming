#include <stdlib.h>
#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13.
 * @str: input char array
 * Return: char
 */

char *rot13(char *str)
{
	char *result = (char *) malloc(sizeof(char) * strlen(str) + 1);
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			result[i] = (((str[i] - 'A') + 13) % 26) + 'A';
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			result[i] = (((str[i] - 'a') + 13) % 26) + 'a';
		}
		else
		{
			result[i] = str[i];
		}
	}
	result[i] = '\0';
	return (result);
}
