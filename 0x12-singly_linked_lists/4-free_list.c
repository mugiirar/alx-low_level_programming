#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a given linkied list
 *
 * @head: list_t list to be freed
 *
 */

void free_list(list_t *head)
{
	list_t *p;

	while (head)
	{
		p = head->next;
		free(head->str);
		free(head);
		head = p;
	}
}
