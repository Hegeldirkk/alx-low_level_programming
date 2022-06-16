#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_list -list_t list.
 * @head: head
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
