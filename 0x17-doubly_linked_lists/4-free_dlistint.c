#include "lists.h"

/**
 * free_dlistint - program frees
 * @head: pointer dlistint_t
 *
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	head = NULL;
}
