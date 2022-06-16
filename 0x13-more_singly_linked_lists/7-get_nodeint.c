#include "lists.h"

/**
 * get_nodeint_at_index - Find a node.
 * @head: Address in a list.
 * @index: Position of a the node
 * Return: Nod
 **/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i != index)
	{
		if (head->next != NULL)
		{
			head = head->next;
			i++;
		}
		else
			return (NULL);
	}

	return (head);
}
