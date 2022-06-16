#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - Sum
 * @head: Addres node of the list.
 * Return: Integer.
 **/

int sum_listint(listint_t *head)
{
	int total = 0;

	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
