#include "main.h"
#include <stdlib.h>

/**
 * leet - a function that encodes a string into 1337
 *
 * @str: string input
 *
 * Return: @str
*/

char *leet(char *str)
{
	char ch[] = "aAeEoOtlL";
	char leet[] = "4433007711";
	int x, y;

	for (x = 0; str[x] != '\0'; x++)
	{
		for (y = 0; ch[y] != '\0'; y++)
		{
			if (str[x] == ch[y])
			{
				str[x] = leet[y];
				break;
			}
		}
	}
	return (str);
}
