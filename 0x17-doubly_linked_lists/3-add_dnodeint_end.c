#include "lists.h"

/**
 * add_dnodeint_end - new node at the end
 * @head: pointer dlinkint
 * @n: int variable
 *
 * Return: address or NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t  *tmp = *head, *addnode = malloc(sizeof(dlistint_t));

	if (!head || !addnode)
	{
		return (NULL);
	}
	addnode->n = n;
	addnode->next = NULL;
	if (!*head)
	{
		addnode->prev = NULL;
		*head = addnode;
		return (*head);
	}
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = addnode;
	addnode->prev = tmp;
	return (addnode);
}
