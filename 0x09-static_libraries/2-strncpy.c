#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strncpy - function should work exactly like strncpy
 * @dest: char input
 * @src: char input
 * @n: integer input
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	dest = strncpy(dest, src, n);

	return (dest);
}
