#include "main.h"

/**
 * _strcpy - copys the contents of a string
 * @src: value of the source
 * @dest: value of destination
 * Return: Success.
 */

char *_strcpy(char *dest, char *src)
{
	int j;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	dest[j++] = '\0';
	return (dest);
}

