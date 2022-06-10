#include "lists.h"

/**
 * add_dnodeint - adds a new node
 * @head: pointer dlinkint_t
 * @n: int number
 *
 * Return: address or NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *addnode = malloc(sizeof(dlistint_t));

	if (!addnode)
	{
		return NULL;
	}
	addnode->n = n;
	addnode->prev = NULL;
	addnode->next = *head;
	if (*head)
	{
		(*head)->prev = addnode;
	}
	*head = addnode;
	return (addnode);
}
