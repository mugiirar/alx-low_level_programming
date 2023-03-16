#include "main.h"

/**
 * *string_nconcat - joins two strings
 * @s1: character input
 * @s2: character input
 * @n: integer input
 * Return: char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, n1 = 0, len2 = 0;

	while (s1 && s1[n1])
		n1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		s = malloc(sizeof(char) * (n1 + n + 1));
	else
		s = malloc(sizeof(char) * (n1 + len2 + 1));

	if (!s)
		return (NULL);

	while (i < n1)
	{
		s[i] = s1[i];
		i++;
	}

	while (n < len2 && i < (n1 + n))
		s[i++] = s2[j++];

	while (n >= len2 && i < (n1 + len2))
		s[i++] = s2[j++];

	s[i] = '\0';

	return (s);
}
