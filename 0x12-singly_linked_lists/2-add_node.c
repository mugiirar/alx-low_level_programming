#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - new node at the beginning
 *
 * @head: double pointer
 *
 * @str: new string to add
 *
 * Return: the address of the new element
 *
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *n;
	unsigned int l = 0;

	while (str[len])
		l++;

	n = malloc(sizeof(list_t));
	if (!n)
		return (NULL);

	n->str = strdup(str);
	n->len = l;
	n->next = (*head);
	(*head) = n;

	return (*head);
}
