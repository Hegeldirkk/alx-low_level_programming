#include <stdio.h>
#include "lists.h"

/**
 * list_len - function that returns the number of elements.
 * @h: pointer to typeof and struct list_t.
 *
 * Return: number of elements.
 */

size_t list_len(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		h = (*h).next;
		s++;
	}
	return (s);
}
