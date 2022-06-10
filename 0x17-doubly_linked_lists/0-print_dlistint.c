#include "lists.h"

/**
 * print_dlistint - program prints all the elements.
 * @h: const pointer h to dlistint
 *
 * Return: node
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
