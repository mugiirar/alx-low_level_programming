#include "lists.h"
/**
 * print_listint_safe -  function that prints a listint_t linked
 * list
 *
 * @head: 1st node of the linked list
 *
 * Return:  the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *t = NULL;
	const listint_t *l = NULL;
	size_t c = 0;
	size_t n;

	t = head;

	while (t)
		/* going through */
	{
		printf("[%p] %d\n", (void *)t, t->n);
		c++;
		t = t->next;
		l = head;
		n = 0;
		while (n < c)
		{
			if (t == l)
			{
				printf("-> [%p] %d\n", (void *)t, t->n);
				return (c);
			}
			l = l->next;
			n++;
		}
		if (!head)
		{
			exit(98);
		}
	}
	return (c);
}
