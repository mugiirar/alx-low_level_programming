#include "main.h"

/**
 * _strpbrk - finds the first occurrence of the substring needle
 * in the string haystack
 * @s: char input
 * @accept: char input
 * Return: char
 */

char *_strpbrk(char *s, char *accept)
{
	int w, t;

	for (w = 0; *(s + w) != '\0'; w++)
	{
		for (t = 0; *(accept + t) != '\0'; t++)
		{
			if (*(s + w) == *(accept + t))
				return (s + w);
		}
	}
	return (NULL);
}
