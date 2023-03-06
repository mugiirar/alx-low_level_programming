#include "main.h"


/**
 * *_strpbrk - searches a string for bytes
 *
 * @s: string to search
 *
 * @accept: contains the bytes to look for
 *
 * Return: pointer to the byte in s that matches one of the bytes
 * or NULL if not is found
 */

char *_strpbrk(char *s, char *accept)
{
	int p, k;

	for (p = 0; *s != '\0'; p++)
	{
		for (k = 0; accept[j] != '\0'; k++)
		{
			if (*s == accept[k])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
