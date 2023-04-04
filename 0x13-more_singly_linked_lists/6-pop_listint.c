#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint
 * _t  linked list, and returns the head node’s data (n).
 * @head: linked list input
 * Return: integer
 */

int pop_listint(listint_t **head)
{
	int node;
	listint_t *p, *t;

	if (*head == NULL)
	{
		return (0);
	}

	p = *head;
	t = p->next;
	node = p->n;
	free(p);
	*head = t;
	return (node);
}
