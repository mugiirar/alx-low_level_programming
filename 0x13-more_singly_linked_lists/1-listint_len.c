#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: list input
 * Return: a number(number of elements)
 */

size_t listint_len(const listint_t *h)
{
	size_t p;

	p = 0;

	while (h != NULL)
	{
		p++;
		h = h->next;
	}

	return (p);
}
