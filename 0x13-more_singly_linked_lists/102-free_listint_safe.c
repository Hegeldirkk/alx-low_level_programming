#include "lists.h"
#include <stdio.h>

/**
 * free_listint_safe - frees a linked list
 * @h: node in the linked list
 *
 * Return: elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	size_t i;
	listint_t *next;
	listint_t *array[500];

	if (h == NULL || *h == NULL)
		return (0);

	while (*h)
	{
		i = 0;
		while (i < size)
		{
			if (array[i] == *h)
			{
				*h = NULL;
				h = NULL;
				return (size);
			}
			i++;
		}

		array[size] = *h;

		next = (*h)->next;
		(*h)->next = NULL;
		free(*h);
		*h = next;
		size++;
	}


	*h = NULL;
	h = NULL;

	return (size);
}
