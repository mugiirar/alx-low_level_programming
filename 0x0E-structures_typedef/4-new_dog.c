#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - length of a string
 * @s: string
 *
 * Return: the length
 */

int _len(char *s)
{
	int p;

	p = 0;

	while (s[p] != '\0')
	{
		p++;
	}

	return (p);
}

/**
 * *_strcpy - copies the string
 * @dest: pointer to the buffer in which we copy the string
 * @src: string
 *
 * Return: the pointer
 */

char *_cpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _len(name);
	len2 = _len(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_cpy(dog->name, name);
	_cpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
