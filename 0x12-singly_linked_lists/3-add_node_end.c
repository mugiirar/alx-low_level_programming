#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - new node at the end
 *
 * @head: double pointer to the list_t
 *
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	n = malloc(sizeof(list_t));
	if (!n)
		return (NULL);

	n->str = strdup(str);
	n->len = len;
	n->next = NULL;

	if (*head == NULL)
	{
		*head = n;
		return (n);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = n;

	return (n);
}
