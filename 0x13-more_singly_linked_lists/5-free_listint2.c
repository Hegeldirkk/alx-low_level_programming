#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list 2.
 * @head: pointer to listint_t.
 */

void free_listint2(listint_t **head)
{
	listint_t *freenode;

	if (!head)
		return;
	while (*head != NULL)
	{
		freenode = (*head)->next;
		free(*head);
		*head = freenode;
	}
}
