#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: user input
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t num;

	num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}
