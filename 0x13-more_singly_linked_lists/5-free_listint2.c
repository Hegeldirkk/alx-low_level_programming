#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list 2.
 * @head: pointer to listint_t.
 */

void free_listint2(listint_t **head)
{
	listint_t *freenode, *freelist = *head;

	while (freelist != NULL)
	{
		freenode = freelist->next;
		free(freelist);
		freelist = freenode;
	}
	*head = freelist;
}
