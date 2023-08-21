#include "main.h"

/**
 * _strncat - it will use at most n bytes from src; and src does not
 * need to be null-terminated if it contains n or more bytes
 * @dest: input char
 * @src: input char
 * @n: input integer
 * Return: Character
 */

char *_strncat(char *dest, char *src, int n)
{
	dest = strncat(dest, src, n);

	return (dest);
}
