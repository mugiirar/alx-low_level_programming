#include "main.h"

/**
 * is_prime_number - function first checks if the input number is
 * less than 2
 * @n: integer input
 * @i: integer input
 * Return: integer.
 */

int is_primer(int n, int i);

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}

	return (is_primer(n, 2));
}

/**
 * is_primer - checks if i is equal to n
 * @i: integer result
 * @n: integer input
 * Return: integer
 */

int is_primer(int n, int i)
{
	if (i == n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}

	return (is_primer(n, i + 1));
}
