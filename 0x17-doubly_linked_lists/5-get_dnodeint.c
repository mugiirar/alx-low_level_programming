#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t
 *
 * @head: pointer to head
 *
 * @index: index of the node to search for, starting from 0
 * Return: nth node or null
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int current_index = 0;
	dlistint_t *current_node = head;

	while (current_node != NULL && current_index != index)
	{
		current_node = current_node->next;
		current_index++;
	}

	return current_node;
}

