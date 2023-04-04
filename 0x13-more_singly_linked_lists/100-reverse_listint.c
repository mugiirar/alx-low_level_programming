#include "lists.h"

/**
 * reverse_listint - function that reverse a linked list
 *
 * @head: first node in the list
 *
 * Return: first node in the new list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *v = NULL;
	listint_t *t = NULL;

	while (*head)
	{
		t = (*head)->next;
		(*head)->next = v;
		v = *head;
		*head = t;
	}

	*head = v;


	return (*head);
}
