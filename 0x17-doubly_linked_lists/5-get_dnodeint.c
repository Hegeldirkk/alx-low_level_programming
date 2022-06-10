#include "lists.h"

/**
 * get_dnodeint_at_index - return nieme node of linked
 * @head: pointer dlistint_t
 * @index: unsigned int var
 *
 * Return: nth or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;

	while (tmp && index)
	{
		index--;
		tmp = tmp->next;
	}
	return (tmp);
}
