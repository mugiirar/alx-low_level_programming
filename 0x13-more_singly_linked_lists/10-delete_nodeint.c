#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at
 * at index index of a listint_t linked list.
 *
 * @head: first element in the list
 *
 * @index: node to delete
 *
 * Return: 1 for  (Success), or -1 (Fail)
 *
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *p = *head;
	listint_t *c = NULL;
	unsigned int k = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(p);
		return (1);
	}

	while (k < index - 1)
	{
		if (!p || !(p->next))
			return (-1);
		p = p->next;
		k++;
	}


	c = p->next;
	p->next = c->next;
	free(c);

	return (1);
}
