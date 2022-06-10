#include "lists.h"

/**
 * insert_dnodeint_at_index -  inserts a new node
 * @h: double pointer dlinkint_t
 * @idx: int var unsigned
 * @n: int var
 *
 * Return: address or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *tmp = *h;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	for (; idx != 1; idx--)
	{
		tmp = tmp->next;
		if (!tmp)
		{
			return (NULL);
		}
	}
	if (!tmp->next)
	{
		return (add_dnodeint_end(h, n));
	}
	node = malloc(sizeof(dlistint_t));

	if (!node)
	{
		return (NULL);
	}
	node->n = n;
	node->prev = tmp;
	node->next = tmp->next;
	tmp->next->prev = node;
	tmp->next = node;
	return (node);
}
