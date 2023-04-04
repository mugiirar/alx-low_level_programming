#include "lists.h"

/**
 * free_listint - freeing contents of list
 * @head: pointer to to the first node of the list
 * Return: Always (0)
 */

void free_listint(listint_t *head)
{
	listint_t *p;

	while (head)
	{
		p = head->next;
		free(head);
		head = p;
	}
}
