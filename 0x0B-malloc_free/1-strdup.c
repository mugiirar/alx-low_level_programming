#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *p;
	unsigned int k, len;

	k = 0;
	len = 0;

	if (str == NULL)

		return (NULL);

	while (str[len])
		len++;

	p = malloc(sizeof(char) * (len + 1));

	if (p == NULL)

		return (NULL);

	while ((p[k] = str[k]) != '\0')
		k++;

	return (p);
}
