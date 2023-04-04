#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of
 *a listint_t linked list.
 * @head: first node of the list
 * @index: no of node to access
 *
 * Return: index is the index of the node, starting at 0
 * if the node does not exist, return NULL
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int k;

	k = 0;

	while (k < index && head != NULL)
	{
		head = head->next;
		k++;
	}

	return (head);
}
