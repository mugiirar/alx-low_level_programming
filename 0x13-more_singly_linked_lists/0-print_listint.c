#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: user input
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t p = 0;

	while (h)
	{
		printf("%d\n", h->n);
		p++;
		h = h->next;
	}
	return (p);
}
