#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strcmp - function should work exactly like strcmp
 * @s1: input char
 * @s2: input char
 * Return: int
 */


int _strcmp(char *s1, char *s2)
{
	int r;

	r = strcmp(s1, s2);

	return (r);
}
