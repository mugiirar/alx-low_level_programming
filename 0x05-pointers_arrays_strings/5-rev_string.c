#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: char inputs
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int len = strlen(s);
	int i;

	for (i = len - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
