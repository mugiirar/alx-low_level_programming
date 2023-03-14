#include "main.h"
#include <stdlib.h>

/**
  *argstostr - concatenates all arguments
  *@ac: argument
  *@av: pointer
  *Return: NULL if ac == 0 or av == null, Pointer to new string.
  *NULL on fail.
  */


char *argstostr(int ac, char **av)
{
	int p, j, k, s;
	char *g;

	s = 0;
	k = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	p = 0;
	while (p < ac)
	{
		j = 0;
		while (av[p][j])
		{
			s++;
			j++;
		}
		s++;
		p++;
	}
	g = malloc((sizeof(char) * s) + 1);
	if (g == NULL)
		return (NULL);
	p = 0;
	while (p < ac)
	{
		j = 0;
		while (av[p][j])
		{
			g[k] = av[p][j];
			j++;
			k++;
		}
		g[k] = '\n';
		k++;
		p++;
	}
	g[k] = '\0';
	return (g);
}
