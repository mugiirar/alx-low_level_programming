#include "main.h"

/**
 * is_palindrome -  function that returns 1 if a string is a
 * palindrome and 0 if not.
 * @s: character inputs
 * @start: int input
 * @end: int input
 * Return: integer.
 */

int is_palindromerrr(char *s, int start, int end);

int is_palindrome(char *s)
{
	int len;

	if (s == NULL)
	{
		return (0);
	}

	len = strlen(s);

	if (len <= 1)
	{
		return (1);
	}

	return (is_palindromerrr(s, 0, len - 1));
}

/**
 * is_palindromerrr - checks if the starting index start is
 * greater
 * than or equal to the ending index end
 * is_palidrome - function first checks if the input string is NULL.
 * @s: character input
 * @start: int input
 * @end: int input
 * Return: int
 */


int is_palindromerrr(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}

	if (s[start] != s[end])
	{
		return (0);
	}

	return (is_palindromerrr(s, start + 1, end - 1));
}
