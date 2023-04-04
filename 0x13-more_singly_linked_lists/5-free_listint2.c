#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: pointer to a linked list
 * Return: Nothing (void)
 */

void free_listint2(listint_t **head)
{
	listint_t *t, *p;

	if (head != NULL)
	{
		t = *head;

		while ((p = t) != NULL)
		{
			t = t->next;

			free(p);

		}

		*head = NULL;
	}
}
