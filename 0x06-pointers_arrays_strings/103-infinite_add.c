#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer for result
 * @size_r: buffer size
 * Return: address of r or 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int carry = 0;
	int sum, i, j;

	if (len1 + len2 >= size_r)
		return (0);
	for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0 || carry; i--, j--)
	{
		sum = carry;
		if (i >= 0)
			sum += n1[i] - '0';
		if (j >= 0)
			sum += n2[j] - '0';
		carry = sum / 10;
		r[len1 + len2 - 1 - (i + j)] = (sum % 10) + '0';
	}
	r[len1 + len2] = '\0';
	for (i = 0, j = strlen(r) - 1; i < j; i++, j--)
	{
		char tmp = r[i];

		r[i] = r[j];
		r[j] = tmp;
	}
	return (r);
}

