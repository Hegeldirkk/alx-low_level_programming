#include "lists.h"

/**
 * dlistint_len - program return number of elements
 * @h: pointer dlinkint_t
 *
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
