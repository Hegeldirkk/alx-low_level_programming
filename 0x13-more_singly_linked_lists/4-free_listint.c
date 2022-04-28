#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: pointer to listint_t.
 */

void free_listint(listint_t *head)
{
	listint_t *freenode, *freelist= head;

	while (freelist->next != NULL)
	{
		freenode = freelist->next;
		free(freelist);
		freelist = freenode;
	}
}
