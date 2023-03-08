#include "main.h"


/**
 * _root - square root of number
 *
 * @n: number to find square root 
 * @p: tests square root
 *
 * Return: square root of n, else -1
 *
 */

int _root(int n, int p)
{
	if (p * p > n)
		return (-1);
	if (p * p == n)
		return (p);
	return (_root(n, p + 1));
}

/**
 * _sqrt_recursion - natural square root
 *
 * @n: number to find square root
 *
 * Return: square root of n, else -1
 *
 */

int _sqrt_recursion(int n)
{
	return (_root(n, 1));
}
