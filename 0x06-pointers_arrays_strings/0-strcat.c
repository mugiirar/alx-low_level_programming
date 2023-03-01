#include "main.h"

/**
 * _strcat - appends the src string to the dest string
 * @src: char input
 * @dest: char input
 * Return: Char
 */

char *_strcat(char *dest, char *src)
{
	dest = strcat(dest, src);
	return (dest);
}
