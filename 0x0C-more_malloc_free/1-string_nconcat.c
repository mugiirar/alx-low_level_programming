#include "main.h"

/**
 * *string_nconcat -  a function that concatenates two string
 * @s1: char input
 * @s2: char input
 * @n: integer input
 * Return: char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int k;
	unsigned int m;
	unsigned int l;
	unsigned int y;

	k = 0;
	while(s1[k] != '\0')
	{
		k++;
	}

	m = k + n;

	p = malloc((m + 1) * sizeof(char));

	l = 0;
	while (s1[l] != '\0')
	{
		p[l] = s1[l];
		l++;
	}

	y = 0;
	while (y <= n)
	{
		p[l] = s2[y];
		y++;
		l++;
	}
	p[l] = '\0';
	return (p);
}
