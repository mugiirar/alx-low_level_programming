#include "main.h"

/**
 * _strcat - appends source to the destination string
 *
 * @dest: string to append by source
 *
 * @src: string to append to destination
 *
 * Return: address of destination
 */

char *_strcat(char *dest, char *src)
{
	int a, k;

	a = k = 0;
	while (*(dest + a))
		a++;
	while ((*(dest + a) = *(src + k)))
	{
		a++;
		k++;
	}
	return (dest);
}
