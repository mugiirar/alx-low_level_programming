#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at
 * a given position
 *
 * @h: head of the list
 * @idx: index of the new node
 * @n: value of the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *head = *h;
	unsigned int i;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (i = 0; head != NULL && i < idx - 1; i++)
	{
		head = head->next;
	}

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new != NULL)
	{
		new->n = n;
		new->prev = head;
		new->next = (head->next == NULL) ? NULL : head->next;
		if (new->next != NULL)
			new->next->prev = new;
		head->next = new;
	}

	return (new);
}
