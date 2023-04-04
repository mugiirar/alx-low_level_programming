#include "lists.h"

/**
 * *add_nodeint_end - function that adds a new node at the end of
 * a listint_t list.
 * @head: input linked list
 * @n: integer input
 * Return:  the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *p;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	p = *head;

	if (p == NULL)
	{
		*head = node;
	}
	else
	{
		while (p->next != NULL)
		{
			p = p->next;
		}
		p->next = node;
	}

	return (*head);
}
