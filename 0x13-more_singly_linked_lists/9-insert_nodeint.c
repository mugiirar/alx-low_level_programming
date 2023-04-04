#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node at
 * a given position
 * @head: the first node in the list
 * @idx: new node is added
 * @n: data to insert
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int k;
	listint_t *w;
	listint_t *p = *head;

	w = malloc(sizeof(listint_t));
	if (!w || !head)
		return (NULL);

	w->n = n;
	w->next = NULL;

	if (idx == 0)
	{
		w->next = *head;
		*head = w;
		return (w);
	}

	k = 0;
	while (p && k < idx)
	{

		if (k == idx - 1)
		{
			w->next = p->next;
			p->next = w;
			return (w);
		}
		else
			p = p->next;
		k++;
	}

	return (NULL);
}
