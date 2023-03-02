#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer for result
 * @size_r: buffer size
 * ahhh! Crazy task! Expand your knowledge
 * Return: address of r or 0
 */
#include <string.h>


char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0;
	int len1 = strlen(n1), len2 = strlen(n2);
	int len = len1 > len2 ? len1 : len2;

	if (len + 1 > size_r)
		return (NULL);

	r[len + 1] = '\0';

	while (len1 || len2)
	{
		int digit1 = len1 ? n1[--len1] - '0' : 0;
		int digit2 = len2 ? n2[--len2] - '0' : 0;
		int sum = carry + digit1 + digit2;

		carry = sum / 10;
		r[len--] = (sum % 10) + '0';
	}

	if (carry)
	{
		if (len + 1 == 0)
			return (NULL);
		r[len--] = carry + '0';
	}

	return (r + len + 1);
}

