#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node
 * @head: dlistint_t pointer
 * @index: unsigned var
 *
 * Return: 1 or -1.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	size_t t = 0;

	if (!*head)
	{
		return (-1);
	}
	while (tmp)
	{
		tmp = tmp->next;
		t++;
	}
	if (t < index + 1)
	{
		return (-1);
	}
	tmp = *head;
	if (!index)
	{
		*head = tmp->next;
		if (tmp->next)
		{
			tmp->next->prev = NULL;
		}
		tmp->next = NULL;
		free(tmp);
		return (1);
	}
	while (index--)
	{
		tmp = tmp->next;
	}
	tmp->prev->next = tmp->next;
	if (tmp->next)
	{
		tmp->next->prev = tmp->prev;
	}
	free(tmp);
	return (1);
}
