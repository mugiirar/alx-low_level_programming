#include "lists.h"

/**
 * *add_nodeint -  function that adds a new node at the beginning of a
 * listint_t list.
 * @head: pointer to the current head
 * @n: length
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add;

	add = malloc(sizeof(listint_t));

	if (add == NULL)
	{
		return (NULL);
	}

	else
	{
		add->next = *head;
		add->n = n;
		*head = add;
	}
	return (add);
}
